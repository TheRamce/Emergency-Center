#ifndef A_ACTIVATELIGHT_H
#define A_ACTIVATELIGHT_H
#include "EmergencyCenter_global.h"

#include "a_action.h"

class EMERGENCYCENTER_EXPORT ActivateLight: public Action
{
public:
    ActivateLight();
    void execute() override;
};

#endif // A_ACTIVATELIGHT_H
