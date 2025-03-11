#include "a_notifysecurityaction.h"
#include <iostream>
#include <ostream>

NotifySecurityAction::NotifySecurityAction() {
    // Initialize any required members here if needed
}
NotifySecurityAction::NotifySecurityAction(const std::string security)
    :security{security}
{

}

// Override the execute method
void NotifySecurityAction::execute() {
    if (!security.empty()) {
        std::cout << "Notifying security: " << security << std::endl;
        // Additional code to notify the security if needed
    } else {
        std::cout << "No security name provided. Cannot notify security." << std::endl;
    }
}

// Setter method for security name
void NotifySecurityAction::setSecurityName(const std::string& securityName) {
    security = securityName;
}
