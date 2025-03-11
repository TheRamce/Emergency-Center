#ifndef A_ACTION_H
#define A_ACTION_H
#include "EmergencyCenter_global.h"

class EMERGENCYCENTER_EXPORT Action
{
public:
    Action();
    virtual void execute() = 0;
};

#endif // A_ACTION_H
