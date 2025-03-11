#ifndef A_SENDEMAILACTION_H
#define A_SENDEMAILACTION_H
#include "EmergencyCenter_global.h"

#include "a_action.h"
#include <string>

class EMERGENCYCENTER_EXPORT SendEmailAction: public Action
{
private:
    std::string email;

public:
    SendEmailAction();
    SendEmailAction(std::string email);
    void execute() override;
};

#endif // A_SENDEMAILACTION_H
