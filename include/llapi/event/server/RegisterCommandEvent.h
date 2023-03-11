#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/CommandRegistry.hpp"
#include "llapi/utils/AccessorMacro.h"


namespace ll::event::server {
/**
 * @brief Player connect event(aka PlayerPreJoinEvent).
 * @details This event is called when a player connects to the server.
 */
class RegisterCommandEvent : public Event<RegisterCommandEvent> {
    LL_RO_MEMBER(CommandRegistry*, registry, getRegistry);

    explicit RegisterCommandEvent(CommandRegistry* registry);

    LL_DELETE_COPY(RegisterCommandEvent);
    LL_DELETE_MOVE(RegisterCommandEvent);
};

} // namespace ll::event::server