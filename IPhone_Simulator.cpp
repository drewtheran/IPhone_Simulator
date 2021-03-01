#include <iostream>
#include "IPhone_Simulator.hpp"

int user = 1;
int power_button_press_time = 0;
bool circuit_touch = false;
int circuit_touch_void_time = 10;
bool button_pressed = false;
bool circuit_touch_time_activated = false;
bool power_on = false;


//Power On and Off
int simulator_on() {

    bool power_on = false;

    if (power_button_press_time >= 5) {
        for (int i = 0; i <= 100; i++) {
            power_on = true;
            std::cout << "Phone Simulator is On.\n";
        }
    }
    else {
        power_on = false;
    }
}

//Circuit Touch Time Activation
int circuit_touch_time_activate() {
    bool power_on = true;
    if ((power_on = true) && (button_pressed = true)) {
        circuit_touch_time_activated = false;
    }
    else {
        circuit_touch_time_activated = true;
    }

}

//The Famous Button Effect
int simulator_sleepmode() {
    if (circuit_touch_time_activated = true) {
        circuit_touch_void_time = 10;
    }
    else {
        nullptr;
    }
}


