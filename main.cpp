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
        t->attach(d[i]);
    }

    cout << "-------------------------\n";
    t->detach(d[0]);
    cout << "-------------------------\n";
    t->detach(d[9]);
    cout << "-------------------------\n";
    t->detach(d[8]);
    cout << "-------------------------\n";
    t->detach(d[4]);
    cout << "-------------------------\n";
    t->detach(d[4]);

    return 0;
} 
