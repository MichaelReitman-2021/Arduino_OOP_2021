#pragma once
#include "LED_Interface.h"

class LED_Simulated : public LED_Interface {
public:
	LED_Simulated(string name, int id);
	virtual void on();
	virtual void off();
};

