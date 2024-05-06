#include "sensor.h"
#include "dashboard.h"

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


void TemperaturSensor::attach(Dashboard* d)
{
    if(observer[9] == NULL)
    {
        //Mit Schleife ersten freien Platz in Observer-Array suchen
        int i = 0;
        do
        {
            if(observer[i] == NULL)
            {
                observer[i] = d;
                cout << "i: " << i << " : " << d << endl;
                break;
            }
            else
                i++;
        }while(i < 10);
    }

}

void TemperaturSensor::detach(Dashboard* d)
{

}

void TemperaturSensor::notify()
{

}

int TemperaturSensor::getState()
{
    //ToDo
    return 999;
}
