#pragma once

#include "Game/Enemy/AnimScaleController.hpp"
#include "Game/MapObj/MapObjActor.hpp"
#include "Game/LiveActor/ModelObj.hpp"
#include "Game/LiveActor/Spine.hpp"

class Tsukidashikun : public MapObjActor {
public:
    Tsukidashikun(const char*);

    virtual ~Tsukidashikun();
    virtual void init(const JMapInfoIter&);

    void exeWait();
    void exeSign();
    void exeMove();
    void connectToScene(const MapObjActorInitInfo&);
    void initCaseUseSwitchB(const MapObjActorInitInfo&);
    void initCaseNoUseSwitchB(const MapObjActorInitInfo&);
    void startMove();

    f32 _C4;         // 0xC4
    s32 mTimer;         // 0xC8
};

namespace NrvTsukidashikun {
    NERVE(TsukidashikunNrvMoveForward);
    NERVE(TsukidashikunNrvMoveBack);
    NERVE(TsukidashikunNrvSignForward);
    NERVE(TsukidashikunNrvSignBack);
    NERVE(TsukidashikunNrvWaitForward);
    NERVE(TsukidashikunNrvWaitBack);
    NERVE(TsukidashikunNrvRelax);
}; // namespace NrvTsukidashikun
