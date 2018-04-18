#include "ForecastDisplay.h"
using namespace std;
ForecastDisplay::ForecastDisplay(void)
{
forecast_temperature=0;
forecast_humidity=0;
forecast_pressure=0;
}
ForecastDisplay::~ForecastDisplay(void)
{
}
void ForecastDisplay::display()
{
cout << "Forecast Temperature " << forecast_temperature << endl;
cout << "Forecast Humidity " << forecast_humidity << endl;
cout << "Forecast Pressure " << forecast_pressure << endl;
}
void ForecastDisplay::update (float temperature, float humidity, float pressure)
{
forecast_temperature=temperature+1;
forecast_humidity=humidity+1;
forecast_pressure=pressure+1;
}