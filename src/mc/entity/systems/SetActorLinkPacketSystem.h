#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetActorLinkPacketSystem {
public:
    // prevent constructor by default
    SetActorLinkPacketSystem& operator=(SetActorLinkPacketSystem const&);
    SetActorLinkPacketSystem(SetActorLinkPacketSystem const&);
    SetActorLinkPacketSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSetActorLinkPacketSystem@SetActorLinkPacketSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSetActorLinkPacketSystem();

    // NOLINTEND
};
