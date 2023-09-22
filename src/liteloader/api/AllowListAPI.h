#pragma once
#include "liteloader/api/Global.h"
#include <nlohmann/json.hpp>

//////////////////////////////////////////////////////
// For managing AllowList
//
// [Usage]
//
// AllowListManager().has("steve");
// Check whether the player named steve is in the allowList
//
// AllowListManager().has("steve", "114514");
// Check whether the player name=steve and xuid=114514 is in the allowList
//
// AllowListManager().add("alex", "11451419", true]).reload();
// Add the player name=alex and xuid=11451419 to the allowList, and allow her to join the game when the server is full.
//
// AllowListManager().remove("mojang", "233333"]).reload();
// Remove the player name=mojang and xuid=233333 from the allowList,and effect immediately.
//
// AllowListManager().add(...).remove(...).reload();
// chain call
//
// [Note]
//
// If you don't call reload after add/remove, the changes will only write to file
//   but it will not take effect in the game.
// This means the player you added won't be able to join the game until reloading
//
// 如果你在使用add/remove成员之后不调用reload函数, 这些更改将只会写入文件而不会在游戏中生效
// 这意味着你添加到白名单的玩家将不能加入游戏, 直到重载白名单
//
//////////////////////////////////////////////////////
class AllowListManager {

    void save();

public:
    nlohmann::json allowList;

    LLAPI AllowListManager();

    /**
     * @return size of allowlist
     */
    LLAPI size_t size();

    /**
     * @param xuid Optional
     * @return whether the player in the allowlist
     */
    LLAPI bool has(const std::string& name, const std::string& xuid = "");

    /**
     * @param xuid Optional
     * @param index If exists, index will be set to the array index,start from 0
     * @return Return whether the player in the allowlist
     */
    LLAPI bool has(const std::string& name, const std::string& xuid, size_t& index);

    /**
     * @brief Add a player to allowlist
     * @param xuid Optional
     * @param ignore Whether this player is allowed to enter the game ignore the player limit
     * @return AllowListManager reference
     */
    LLAPI AllowListManager& add(const std::string& name, const std::string& xuid = "", bool ignore = false);

    /**
     * @brief Remove a player from allowlist
     * @param xuid Optional
     * @return AllowListManager reference
     */
    LLAPI AllowListManager& remove(const std::string& name, const std::string& xuid = "");

    /**
     * Reload the allowlist(Making changes effective),Apply changes to AllowListFile
     */
    LLAPI void reload();
};
