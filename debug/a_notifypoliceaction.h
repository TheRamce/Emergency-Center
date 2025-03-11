#ifndef A_NOTIFYPOLICEACTION_H
#define A_NOTIFYPOLICEACTION_H

#include "EmergencyCenter_global.h"

#include"a_action.h"

class EMERGENCYCENTER_EXPORT NotifyPoliceAction: public Action
{
public:
    NotifyPoliceAction();
    void execute() override;
};

#endif // A_NOTIFYPOLICEACTION_H
