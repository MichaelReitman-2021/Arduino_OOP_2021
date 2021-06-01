#include "LED_Interface.h"

LED_Interface::LED_Interface(string name, int id) {
	this->my_name = name;
	this->my_id = id;
}

// Don't implement the virtual functions
//	we require subclasses, and the subclass must implement these functions
//void LED_Interface::on()
//{
//}
//
//void LED_Interface::off()
//{
//}
