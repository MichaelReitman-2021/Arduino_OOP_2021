#include <iostream>
#include "LED_Simulated.h"

void LED_Trace(string name, string state) {
	cout << "LED " << name << " is " << state << endl;
}

LED_Simulated::LED_Simulated(string name, int id) : LED_Interface(name, id)
// this constructor invokes the constructor of the interface (i.e. base) class
{
	LED_Trace(this->my_name, "initialized");
}

void LED_Simulated::on()
{
	LED_Trace(this->my_name, "on");
}

void LED_Simulated::off()
{
	LED_Trace(this->my_name, "off");
}
