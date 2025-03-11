#ifndef A_ACTIVATEALARM_H
#define A_ACTIVATEALARM_H
#include "EmergencyCenter_global.h"

#include "a_action.h"
#include <string>

class EMERGENCYCENTER_EXPORT ActivateAlarm : public Action {
public:
    ActivateAlarm();
    ActivateAlarm(std::string building);


    // Override the execute method from Action
    void execute() override;

    // Setter method for building
    void setBuilding(const std::string& buildingName);

private:
    // Class variable to hold the building name
    std::string building;
};

#endif // A_ACTIVATEALARM_H
