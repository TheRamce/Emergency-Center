#ifndef A_EVACUATEBUILDING_H
#define A_EVACUATEBUILDING_H
#include "EmergencyCenter_global.h"

#include "a_action.h"

class EMERGENCYCENTER_EXPORT EvacuateBuilding: public Action
{
public:
    EvacuateBuilding();
    void execute() override;
};

#endif // A_EVACUATEBUILDING_H
