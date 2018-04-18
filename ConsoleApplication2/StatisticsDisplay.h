#pragma once
#include <iostream>
#include "observer.h"
#include "DisplayElement.h"
class StatisticsDisplay :
public Observer, public DisplayElement
{float average_temperature, average_humidity, average_pressure;
float array_temperature[10];
float array_humidity[10];
float array_pressure[10];
public:
StatisticsDisplay(void);
~StatisticsDisplay(void);
void update(float temperature, float humidity, float pressure);
void display();
};
