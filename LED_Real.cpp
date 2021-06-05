#include <iostream>
#include "LED_Real.h"

void LED_Trace_real(string name, string state) {
	cout << "LED " << name << " is " << state << endl;
}


LED_Real::LED_Real(string name, int id) : LED_Interface(name, id)
// this constructor invokes the constructor of the interface (i.e. base) class
{
	LED_Trace_real(this->my_name, "initialized");

	const int pin = this->my_id; // real LEDs have to have Arduino pins 

	// LED_Trace_real(this->my_name, "on pin " + std::to_string(this->my_id));

	cout << "pinMode(" << pin << ", OUTPUT); " << endl; // set the real LED pin to write 

}

void LED_Real::on()
{
	// LED_Trace_real(this->my_name, "on");
	cout << "digitalWrite(" << this->my_id << ", HIGH); "  << endl; // real LEDS get turned on when their pin is set to HIGH
}

void LED_Real::off()
{
	// LED_Trace_real(this->my_name, "off");
	cout << "digitalWrite(" << this->my_id << " , LOW); " << endl; // real LEDS get turned off when their pin is set to LOW

}
