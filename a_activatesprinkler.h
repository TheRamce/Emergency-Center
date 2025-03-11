#ifndef A_ACTIVATESPRINKLER_H
#define A_ACTIVATESPRINKLER_H
#include "EmergencyCenter_global.h"
#include "a_action.h"

class EMERGENCYCENTER_EXPORT ActivateSprinkler: public Action
{
public:
    ActivateSprinkler();
    void execute() override;
};

#endif // A_ACTIVATESPRINKLER_H
