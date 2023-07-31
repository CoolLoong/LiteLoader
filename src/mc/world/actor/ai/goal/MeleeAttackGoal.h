#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MeleeAttackGoal {

public:
    // prevent constructor by default
    MeleeAttackGoal& operator=(MeleeAttackGoal const&) = delete;
    MeleeAttackGoal(MeleeAttackGoal const&)            = delete;
    MeleeAttackGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MeleeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MeleeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@MeleeAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MeleeAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
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
     * @symbol ?_attemptMoveToTarget\@MeleeAttackGoal\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void _attemptMoveToTarget(class Actor&);
    /**
     * @vftbl 11
     * @symbol ?_attemptAttackTarget\@MeleeAttackGoal\@\@MEAAXAEAVActor\@\@MMMAEBVVec3\@\@\@Z
     */
    virtual void _attemptAttackTarget(class Actor&, float, float, float, class Vec3 const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEATTACKGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MeleeAttackGoal();
#endif
    /**
     * @symbol ??0MeleeAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MeleeAttackGoal(class Mob&);
    /**
     * @symbol ?canReachTarget\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVVec3\@\@MMMMH\@Z
     */
    MCAPI static bool canReachTarget(class Mob const&, class Vec3 const&, float, float, float, float, int);
    /**
     * @symbol ?canReachTargetLegacy\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVVec3\@\@MMMMH\@Z
     */
    MCAPI static bool canReachTargetLegacy(class Mob const&, class Vec3 const&, float, float, float, float, int);
    /**
     * @symbol ?isTargetInLineOfSight\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSight(class Mob const&, class Actor const&);
    /**
     * @symbol ?isTargetInLineOfSightLegacy\@MeleeAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const&, class Actor const&);
    /**
     * @symbol ?min3DAttackVersion\@MeleeAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const min3DAttackVersion;
    /**
     * @symbol ?minHitThroughWallFixVersion\@MeleeAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const minHitThroughWallFixVersion;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_attemptMoveToTargetPosition\@MeleeAttackGoal\@\@IEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void _attemptMoveToTargetPosition(class Actor&, float);
    /**
     * @symbol ?_getAttackReachSqr\@MeleeAttackGoal\@\@IEBAMAEBVActor\@\@\@Z
     */
    MCAPI float _getAttackReachSqr(class Actor const&) const;
    /**
     * @symbol ?_inSunlight\@MeleeAttackGoal\@\@IEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _inSunlight(class Actor const&) const;
    // NOLINTEND
};
