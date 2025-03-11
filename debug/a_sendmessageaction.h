#ifndef A_SENDMESSAGEACTION_H
#define A_SENDMESSAGEACTION_H

#include "EmergencyCenter_global.h"

#include "a_action.h"
#include <string>
class EMERGENCYCENTER_EXPORT SendMessageAction : public Action {
public:
    SendMessageAction();

    // Override the execute method from Action
    void execute() override;

    // Setter method for the message
    void setMessage(const std::string& messageContent);

private:
    // Class variable to hold the message content
    std::string message;
};

#endif // SENDMESSAGEACTION_H
