#ifndef A_NOTIFYFIREBRIGADE_H
#define A_NOTIFYFIREBRIGADE_H

#include "EmergencyCenter_global.h"
#include "a_action.h"

class EMERGENCYCENTER_EXPORT NotifyFireBrigade: public Action
{
public:
    NotifyFireBrigade();
    void execute() override;
};

#endif // A_NOTIFYFIREBRIGADE_H
