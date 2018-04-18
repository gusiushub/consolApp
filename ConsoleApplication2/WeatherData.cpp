#include <iostream>
using namespace std;
#include "WeatherData.h"
WeatherData::WeatherData(void)
{
	this->observers=new Observer*[3];
	for (int i=0; i<3; i++)
	{
		this->observers[i]=0;
	}
}
WeatherData::~WeatherData(void)
{
delete []observers;
}
void WeatherData::registerObserver(Observer *a)
{
for (int i=0; i<3; i++)
{
if(observers[i] == 0)
{
observers[i]=a;
return;
}
}
cout << "No positions for Observer " << endl;
}
void WeatherData::removeObserver(Observer* a)
{
for (int i=0; i<3; i++)
{
if(observers[i] == a)
{
observers[i]=0;
return;
}
}
cout << "Observer is not in the list " << endl;
}
void WeatherData::notifyObserver()
{
for (int i=0; i<3; i++)
{
if(observers[i] !=0)
{
observers[i]->update(this->temperature, this->humidity, this->pressure);
}
}
}
void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
this->temperature=temperature;
this->humidity=humidity;
this->pressure=pressure;
this->notifyObserver();
}
void WeatherData::getMeasurements()
{
float temperature, humidity, pressure;
cout << "T= ";
cin >>temperature;
cout << "H= ";
cin >>humidity;
cout << "P= ";
cin >>pressure;
this->setMeasurements(temperature, humidity, pressure);
}