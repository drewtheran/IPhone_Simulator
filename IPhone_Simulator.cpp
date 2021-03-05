#include <iostream>
#include "IPhone_Simulator.hpp"
#include <string>

int user;
bool home_button_pressed;
bool home_button_pressed_twice;
bool power_on;
bool power_button_pressed;
bool upper_volume_button;
bool lower_volume_button;
bool silent_button_left;
bool silent_button_right;
bool silent_mode;
bool tabs_display_mode;
bool passcode_display;
bool passcode_entered;


void introduction() {
    std::cout << "press [Enter] to begin: ";
    std::cin.ignore();
}


//Power On and Off
void power_button() {
    if ((power_on == false) && (power_button_pressed == true)) {
        std::cout << "Phone Simulator is On.\n";
    }
    else if ((power_on == true) && (power_button_pressed = true)) {
        std::cout << "Phone Simulator is Off.\n";
    }
}


void volume_control() {
    if ((power_on == true) && (upper_volume_button == true) && (lower_volume_button) == false) {
        
    }
    else if ((power_on == true) && (upper_volume_button == false) && (lower_volume_button == true)) {

    }
    else {
        nullptr;
    } 
}

void silent_switch() {
    if ((power_on == true) && (silent_button_left == true) && (silent_button_right == false)) {
        silent_mode = true;
    }
    else if ((power_on == true) && (silent_button_left == false) && (silent_button_right == true)) {
        silent_mode = false;
    }
}

void home_button() {
    if (power_on == true) {
        if (home_button_pressed == true) {
            std::cout << "Enter Passcode\n";
            if (passcode_entered = true) {
                std::cout << "Welcome to the homescreen!";
                if (home_button_pressed_twice) {
                    tabs_display_mode = true;
                }
            }
        }
    }
}

void homescreen_display() {
    if ((power_on = true) && (passcode_entered = true)) {
        
    }
}

