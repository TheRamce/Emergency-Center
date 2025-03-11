#ifndef S_SENSOR_H
#define S_SENSOR_H

#include <string>
#include <vector>
#include <memory>
#include<component.h>
#include <chrono>

#include "EmergencyCenter_global.h"



class EMERGENCYCENTER_EXPORT Action;

class EMERGENCYCENTER_EXPORT Sensor: public Component
{
protected:
    int id;
    static int idCounter;  // Static variable to track unique IDs

    std::string location;
    const std::string vendor;
    bool isActive = false;
    std::vector<std::shared_ptr<Action>> actions;

    //optoinal time part
    bool isSetTime=false;
    int activationStartTime[3];
    int activationEndTime[3];    // Activation end time (e.g., 7 PM)
    float currentValue;



public:
    Sensor();
    Sensor(std::string location,const std::string vendor);
    Sensor(std::string location,const std::string vendor, int startHour[3],int endHour[3]);


    virtual void deactivate() = 0;
    virtual void test() = 0;
    virtual void activate();

    void addAction(std::shared_ptr<Action> action);
    void showAction();
    int getId();
    virtual void printInfo();
    std::string getLocation();
    const std::string getVendor(){return this->vendor;}
    void setCurrentValue(float value);
    float getCurrentValue();
};

#endif // S_SENSOR_H
