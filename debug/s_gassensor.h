#ifndef S_GASSENSOR_H
#define S_GASSENSOR_H
#include "EmergencyCenter_global.h"
#include "s_sensor.h"

class EMERGENCYCENTER_EXPORT GasSensor: public Sensor {
    using Sensor::Sensor;  // Allows using the parent class constructors

protected:
    float gasLevel;  // Specific attribute for GasSensor

public:
    // Constructor
    GasSensor(std::string location, const std::string vendor, float gasLevel);

    GasSensor(std::string location,const std::string vendor,float gasLevel, int startHour[3],int endHour[3]);

    // Override the abstract methods from Sensor
    void activate() override;
    void deactivate() override;
    void test() override;

    void printInfo() override;

    // Additional methods specific to GasSensor
    void measureGasLevel();
    float getGasLevel() const;
};

#endif // S_GASSENSOR_H
