#pragma once
#include "LED_Interface.h"
class LED_Real : public LED_Interface {
	public:

	LED_Real(string name, int id);
	virtual void on();
	virtual void off();
};

