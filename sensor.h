#ifndef SENSOR_H
#define SENSOR_H

#include "dashboard.h"
#include <string>
using namespace std;


class Sensor
{
protected:
    Dashboard* observer[10];
    int state;
public:
    virtual string getSensorType() = 0;
    virtual void fetchData(double a[]) = 0;
    virtual int dataSize() = 0;
    virtual void attach(Dashboard*) = 0;
    virtual void detach(Dashboard*) = 0;
    virtual void notify() = 0;
    virtual int getState() = 0;
};

class TemperaturSensor:public Sensor
{

public:
    TemperaturSensor();
    ~TemperaturSensor();
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
    void attach(Dashboard*);
    void detach(Dashboard*);
    void notify();
    int getState();
};




#endif // SENSOR_H
