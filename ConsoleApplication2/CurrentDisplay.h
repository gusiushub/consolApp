#pragma once

#include "Observer.h"
#include "DisplayElement.h"

class CurrentDisplay :
public Observer, public DisplayElement
{
	float temperature, humidity, pressure;
	public:
		CurrentDisplay(void);
		~CurrentDisplay(void);
	void update(float temperature, float humidity, float pressure);
	void display();
};