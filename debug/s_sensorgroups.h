#ifndef S_SENSORGROUPS_H
#define S_SENSORGROUPS_H

#include "component.h"
#include<string>
#include<vector>
#include<memory>
#include "EmergencyCenter_global.h"


// SensorGroups is a Composite in the Composite Pattern
class EMERGENCYCENTER_EXPORT SensorGroups : public Component {
private:
    std::string nameOfTheBuilding;
    std::vector<std::shared_ptr<Component>> sensors; // Composite can hold both Components (Sensors or Groups)

public:
    // Constructor
    SensorGroups(const std::string& nameOfTheBuilding);

    // Methods to add and remove sensors/groups
    void addSensor(std::shared_ptr<Component> sensor);
    void removeSensor(std::shared_ptr<Component> sensor);

    // Override abstract methods from Component
    void activate() override;
    void deactivate() override;
    void test() override;

    std::vector<std::shared_ptr<Component>> getComponents();
};

#endif // S_SENSORGROUPS_H
