#ifndef DASHBOARD_H
#define DASHBOARD_H
#include <iostream>
using namespace std;

class Dashboard
{
public:
    virtual void update() = 0;
};

class Dashboard_1:public Dashboard
{
public:
    void update();
};

#endif // DASHBOARD_H
