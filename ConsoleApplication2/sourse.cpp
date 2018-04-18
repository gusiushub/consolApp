#include <iostream>
using namespace std;
#include "WeatherData.h"
#include "CurrentDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"
#include <conio.h>
void main ()
{
WeatherData a;
ForecastDisplay b;
StatisticsDisplay c;
CurrentDisplay d;
a.registerObserver(&b);
a.registerObserver(&c);
a.registerObserver(&d);
while (1)
{
a.getMeasurements();
b.display();
c.display();
d.display();
}
getch();
}