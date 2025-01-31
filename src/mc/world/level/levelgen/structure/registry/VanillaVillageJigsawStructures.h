#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaVillageJigsawStructures {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructures& operator=(VanillaVillageJigsawStructures const&);
    VanillaVillageJigsawStructures(VanillaVillageJigsawStructures const&);
    VanillaVillageJigsawStructures();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaVillageJigsawStructures@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVFeatureRegistry@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void
    initialize(gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);

    // NOLINTEND
};
