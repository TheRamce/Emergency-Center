#ifndef S_MOTIONSENSOR_H
#define S_MOTIONSENSOR_H

#include "EmergencyCenter_global.h"

#include "s_sensor.h"
#include <string>

class EMERGENCYCENTER_EXPORT motionSensor : public Sensor
{
    using Sensor::Sensor; // Allows the use of the base class constructor

private:
    float range; // Range variable specific to the motion sensor
    int startHour[3]; // Start time in hours, minutes, seconds
    int endHour[3];

public:
    // Constructor
    motionSensor(std::string location, const std::string& vendor, float range);
    motionSensor(std::string location,const std::string vendor,float range, int startHour[3],int endHour[3]);

    // Override virtual methods from the base class
    void activate() override;
    void deactivate() override;
    void test() override;

    void printInfo() override;


    // Getter for the range variable
    float getRange() const;
    // Setter for the range variable
    void setRange(float newRange);
    bool isActiveDuring(int hour, int minute);

};

#endif // S_MOTIONSENSOR_H
