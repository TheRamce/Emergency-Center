#ifndef S_SMOKESENSOR_H
#define S_SMOKESENSOR_H
#include "EmergencyCenter_global.h"

#include "s_sensor.h"

class EMERGENCYCENTER_EXPORT smokeSensor: public Sensor
{
    using Sensor::Sensor;//helps you to use the parent class constructures

protected:
    float level;


public:

    smokeSensor(std::string location,const std::string vendor,
                float level);

    smokeSensor(std::string location,const std::string vendor,float level, int startHour[3],int endHour[3]);


     void activate() override;
     void deactivate() override;
     void test()override;

     void printInfo() override;


};

#endif // S_SMOKESENSOR_H
