#pragma once

#include "subject.h"
#include "Observer.h"
class WeatherData :
public Subject
{
float temperature, humidity, pressure;
Observer** observers;
public:
WeatherData(void);
~WeatherData(void);
void registerObserver(Observer* a);
void removeObserver(Observer* a);
void notifyObserver();
void setMeasurements(float temperature, float humidity, float pressure);
void getMeasurements();
};