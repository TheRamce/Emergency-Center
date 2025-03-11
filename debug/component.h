#ifndef COMPONENT_H
#define COMPONENT_H
#include "EmergencyCenter_global.h"

class EMERGENCYCENTER_EXPORT Component
{
public:
    Component();
    virtual ~Component() = default;
    virtual void activate() = 0;
    virtual void deactivate() = 0;
    virtual void test() = 0;
};

#endif // COMPONENT_H
