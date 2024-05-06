#include <iostream>
#include "sensor.h"
#include "dashboard.h"

using namespace std;

int main()
{
    TemperaturSensor* t = new TemperaturSensor;
    
    Dashboard* d[10];
    for( int i=0; i<10; i++)
    {
        d[i] = new Dashboard_1;
        t->attach(d[0]);
    }
    return 0;
} 
