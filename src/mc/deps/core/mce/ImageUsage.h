#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class ImageUsage : unsigned char {
    Unknown = 0x0,
    sRGB    = 0x1,
    Data    = 0x2,
};

};
