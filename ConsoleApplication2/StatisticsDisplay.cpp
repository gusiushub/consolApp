#include "StatisticsDisplay.h"
using namespace std;
StatisticsDisplay::StatisticsDisplay(void)
{
for(int i=0; i<10; i++)
{
array_temperature[i]=0;
array_humidity[i]=0;

array_pressure[i]=0;
}
}
StatisticsDisplay::~StatisticsDisplay(void)
{
}
void StatisticsDisplay::display()
{
cout << "Average Temperature: " << average_temperature << endl;
cout << "Average Humidity: " << average_humidity << endl;
cout << "Average Pressure: " << average_pressure << endl;
}
void StatisticsDisplay::update(float temperature, float humidity, float pressure)
{
	for(int j=8;j>=0;j--)
	{
		array_temperature[j+1]=array_temperature[j];
		array_humidity[j+1]=array_humidity[j];
		array_pressure[j+1]=array_pressure[j];
	}
	array_temperature[0]=temperature;
	array_humidity[0]=humidity;
	array_pressure[0]=pressure;
	float sum_temperature = 0;
	float sum_humidity = 0;
	float sum_pressure = 0;
	for(int i=0;i<10;i++)
	{
		sum_temperature += array_temperature[i];
		sum_humidity += array_humidity[i];
		sum_pressure += array_pressure[i];
	}
	average_temperature = sum_temperature / 10;
	average_humidity = sum_humidity / 10;
	average_pressure = sum_pressure / 10;
}
