#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseMoveToGoal {

public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&) = delete;
    BaseMoveToGoal(BaseMoveToGoal const&)            = delete;
    BaseMoveToGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BaseMoveToGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BaseMoveToGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@BaseMoveToGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@BaseMoveToGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@BaseMoveToGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RaidGardenGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const = 0;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol ?hasReachedTarget\@BaseMoveToGoal\@\@UEBA_NXZ
     */
    virtual bool hasReachedTarget() const;
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@RaidGardenGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&) = 0;
    /**
     * @vftbl 12
     * @symbol ?_nextStartTick\@BaseMoveToGoal\@\@MEAAHXZ
     */
    virtual int _nextStartTick();
    /**
     * @vftbl 13
     * @symbol ?_canReach\@BaseMoveToGoal\@\@MEAA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool _canReach(class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@BaseMoveToBlockGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock() = 0;
    /**
     * @vftbl 15
     * @symbol ?_getTargetPosition\@BaseMoveToGoal\@\@MEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 _getTargetPosition() const;
    /**
     * @vftbl 16
     * @symbol ?_getRepathTime\@BaseMoveToGoal\@\@MEBA_KXZ
     */
    virtual uint64_t _getRepathTime() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOVETOGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseMoveToGoal();
#endif
    /**
     * @symbol ??0BaseMoveToGoal\@\@QEAA\@AEAVMob\@\@MMMHH\@Z
     */
    MCAPI BaseMoveToGoal(class Mob&, float, float, float, int, int);
    /**
     * @symbol ?setTargetPositionOffset\@BaseMoveToGoal\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setTargetPositionOffset(class Vec3 const&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_blockAboveTarget\@BaseMoveToGoal\@\@IEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos _blockAboveTarget() const;
    /**
     * @symbol ?_checkIfStuck\@BaseMoveToGoal\@\@IEAAXXZ
     */
    MCAPI void _checkIfStuck();
    /**
     * @symbol ?_isCooldownActive\@BaseMoveToGoal\@\@IEBA_NXZ
     */
    MCAPI bool _isCooldownActive() const;
    /**
     * @symbol ?setInterval\@BaseMoveToGoal\@\@IEAAXH\@Z
     */
    MCAPI void setInterval(int);
    // NOLINTEND
};
