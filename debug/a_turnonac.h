#ifndef A_TURNONAC_H
#define A_TURNONAC_H
#include "EmergencyCenter_global.h"

#include "a_action.h"

class EMERGENCYCENTER_EXPORT TurnOnAC: public Action
{
public:
    TurnOnAC();
    void execute() override;
};

#endif // A_TURNONAC_H
