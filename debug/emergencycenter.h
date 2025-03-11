#ifndef EMERGENCYCENTER_H
#define EMERGENCYCENTER_H
#include "EmergencyCenter_global.h"
#include<vector>
#include<memory>

class Component;
class Sensor;
class EMERGENCYCENTER_EXPORT EmergencyCenter
{
private:
    std::vector<std::shared_ptr<Component>> sensorGroups;
    void collectSensors(const std::shared_ptr<Component> &sensorGroups, std::shared_ptr<Sensor> &sensors);
public:
    EmergencyCenter();
    void addSensorGroup(std::shared_ptr<Component>);
    void activateAllSensors();
    void testAllSensors();
    void deactivateAllSensors();
    void activateSensor(std::shared_ptr<Component>);
    void deactivateSensor(std::shared_ptr<Component>);
    void test(std::shared_ptr<Component>);
    void operator++();
    void sortById();
    void sortByLocation();
    void sortByVendor();
};

#endif // EMERGENCYCENTER_H
