#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpControlDescription {

public:
    // prevent constructor by default
    JumpControlDescription& operator=(JumpControlDescription const&) = delete;
    JumpControlDescription(JumpControlDescription const&)            = delete;
    JumpControlDescription()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@JumpControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@JumpControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JumpControlDescription();
#endif
    // NOLINTEND
};
