// Simulate Embedded.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LED_Real.h"

int main()
{
    // create a number of LEDs
    const int LED_Count = 10;
    LED_Real* LED[LED_Count];

    cout << "Starting LED test, Count = " << LED_Count << endl;

    int i;
    for (i = 0; i < LED_Count; i++) {
        LED[i] = new LED_Real("LED_" + std::to_string(i), i);
    }
 
    cout << "Created " << LED_Count << " LED objects" << endl;

    for (i = 0; i < LED_Count; i += 2) {
        LED[i]->on();
    }

    for (i = 2; i < LED_Count; i += 4) {
        LED[i]->off();
    }
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
