#pragma once
#include "Observer.h"
class Subject
{
virtual void registerObserver(Observer*)=0;
virtual void removeObserver(Observer*)=0;
virtual void notifyObserver()=0;
};
