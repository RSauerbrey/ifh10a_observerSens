#include "sensor.h"

TemperaturSensor::TemperaturSensor()
{
    //Datenarray mit Zufallswerten füllen
    srand(time(NULL));
    for(int i = 0 ; i < 5; i++)
    {
        data[i] = (double) (rand() % 501)/10.0;
    }
}

TemperaturSensor::~TemperaturSensor()
{
    cout << "Objekt gekillt" << endl;
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double a[])
{
    //ToDo
    for(int i = 0 ; i < 10; i++)
    {
        a[i] = data[i];
    }
}

int TemperaturSensor::dataSize()
{
    return 5;
}
