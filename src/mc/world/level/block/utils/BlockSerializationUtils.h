#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockSerializationUtils { enum class NBTState; }
namespace BlockSerializationUtils { struct NbtToBlockCache; }
// clang-format on

namespace BlockSerializationUtils {
// NOLINTBEGIN
/**
 * @symbol
 * ?BLOCK_REPLACE_DATA_MAP\@BlockSerializationUtils\@\@3V?$unordered_map\@VHashedString\@\@V?$function\@$$A6AXHAEAVCompoundTag\@\@\@Z\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$function\@$$A6AXHAEAVCompoundTag\@\@\@Z\@std\@\@\@std\@\@\@3\@\@std\@\@A
 */
MCAPI extern std::unordered_map<class HashedString, std::function<void(int, class CompoundTag&)>>
    BLOCK_REPLACE_DATA_MAP;
/**
 * @symbol ?clearBlockReplaceDataMap\@BlockSerializationUtils\@\@YAXXZ
 */
MCAPI void clearBlockReplaceDataMap();
/**
 * @symbol ?clearNBTToBlockCache\@BlockSerializationUtils\@\@YAXXZ
 */
MCAPI void clearNBTToBlockCache();
/**
 * @symbol ?initBlockReplaceDataMap\@BlockSerializationUtils\@\@YAXXZ
 */
MCAPI void initBlockReplaceDataMap();
/**
 * @symbol
 * ?tryGetBlockFromNBT\@BlockSerializationUtils\@\@YA?AU?$pair\@W4NBTState\@BlockSerializationUtils\@\@PEBVBlock\@\@\@std\@\@AEBVCompoundTag\@\@PEAUNbtToBlockCache\@1\@\@Z
 */
MCAPI std::pair<enum class BlockSerializationUtils::NBTState, class Block const*>
      tryGetBlockFromNBT(class CompoundTag const&, struct BlockSerializationUtils::NbtToBlockCache*);
// NOLINTEND

}; // namespace BlockSerializationUtils
