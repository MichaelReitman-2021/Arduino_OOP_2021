#include <iostream>
#include "LED_Real.h"

void LED_Trace_real(string name, string state) {
	cout << "LED " << name << " is " << state << endl;
}

LED_Real::LED_Real(string name, int id) : LED_Interface(name, id)
// this constructor invokes the constructor of the interface (i.e. base) class
{
	LED_Trace_real(this->my_name, "initialized");

	const int pin = this->my_id;

	LED_Trace_real(this->my_name, "on pin " + std::to_string(this->my_id));

}

void LED_Real::on()
{
	LED_Trace_real(this->my_name, "on");
}

void LED_Real::off()
{
	LED_Trace_real(this->my_name, "off");
}
