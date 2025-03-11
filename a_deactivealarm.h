#ifndef A_DEACTIVEALARM_H
#define A_DEACTIVEALARM_H
#include "EmergencyCenter_global.h"

#include "a_action.h"

class EMERGENCYCENTER_EXPORT DeactiveAlarm: public Action
{
public:
    DeactiveAlarm();
    void execute() override;
};

#endif // A_DEACTIVEALARM_H
