#include "ModalForm.h"
#include "liteloader/core/LiteLoader.h"
#include "liteloader/core/form/FormHandler.h"
#include "mc/network/packet/ModalFormRequestPacket.h"

namespace ll::form {

class ModalForm::ModalFormImpl : public FormImpl {
public:
    using Callback = std::function<void(Player&, bool)>;

    std::string mTitle{};
    std::string mContent{};
    std::string mButtonLeft{};
    std::string mButtonRight{};
    Callback    mCallback{};

    ModalFormImpl(
        std::string title,
        std::string content,
        std::string buttonLeft,
        std::string buttonRight,
        Callback    callback = Callback()
    )
    : mTitle(std::move(title)), mContent(std::move(content)), mButtonLeft(std::move(buttonLeft)),
      mButtonRight(std::move(buttonRight)), mCallback(std::move(callback)) {}
    ~ModalFormImpl() override = default;

    void setTitle(const std::string& title) { mTitle = title; }

    void setContent(const std::string& content) { mContent = content; }

    void setButtonLeft(const std::string& buttonLeft) { mButtonLeft = buttonLeft; }

    void setButtonRight(const std::string& buttonRight) { mButtonRight = buttonRight; }

    void setCallback(Callback callback) { mCallback = std::move(callback); }

    bool sendTo(Player& player, Callback callback) {
        callback = callback ? std::move(callback) : mCallback;
        if (!callback) {
            ll::logger.error("ModalForm callback is null");
            return false;
        }
        int  id   = handler::addFormHandler(std::make_unique<handler::ModalFormHandler>(std::move(callback)));
        auto json = serialize();
        if (json.is_null()) {
            return false;
        }
        auto formPacket = ModalFormRequestPacket(id, json.dump());
        player.sendNetworkPacket(formPacket);
        return true;
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }

    [[nodiscard]] fifo_json serialize() const override {
        try {
            return {
                {"type",    "modal"     },
                {"title",   mTitle      },
                {"content", mContent    },
                {"button1", mButtonLeft },
                {"button2", mButtonRight}
            };
        } catch (...) {
            ll::logger.error("Failed to serialize ModalForm");
            return fifo_json{};
        }
    }
};

ModalForm::ModalForm(
    std::string title,
    std::string content,
    std::string buttonLeft,
    std::string buttonRight,
    Callback    callback
)
: impl(std::make_unique<ModalFormImpl>(
      std::move(title),
      std::move(content),
      std::move(buttonLeft),
      std::move(buttonRight),
      std::move(callback)
  )) {}

ModalForm& ModalForm::setTitle(const std::string& title) {
    impl->setTitle(title);
    return *this;
}

ModalForm& ModalForm::setContent(const std::string& content) {
    impl->setContent(content);
    return *this;
}

ModalForm& ModalForm::setButtonLeft(const std::string& buttonLeft) {
    impl->setButtonLeft(buttonLeft);
    return *this;
}

ModalForm& ModalForm::setButtonRight(const std::string& buttonRight) {
    impl->setButtonRight(buttonRight);
    return *this;
}

ModalForm& ModalForm::setCallback(Callback callback) {
    impl->setCallback(std::move(callback));
    return *this;
}

bool ModalForm::sendTo(Player& player, Callback callback) { return impl->sendTo(player, std::move(callback)); }

} // namespace ll::form
