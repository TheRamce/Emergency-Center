#ifndef A_NOTIFYSECURITYACTION_H
#define A_NOTIFYSECURITYACTION_H
#include "EmergencyCenter_global.h"

#include "a_action.h"
#include <string>

class EMERGENCYCENTER_EXPORT NotifySecurityAction : public Action {
public:
    NotifySecurityAction();
     NotifySecurityAction(const std::string security);

    // Override the execute method from Action
    void execute() override;

    // Setter method for the security name
    void setSecurityName(const std::string& securityName);

private:
    // Class variable to hold the security name
    std::string security;
};

#endif // NOTIFYSECURITYACTION_
