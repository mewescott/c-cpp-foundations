//: C02:Ex3_16_main.cpp
/*Create a program that uses an enumeration of colors. Create a variable of this enum type 
and print out all the numbers that correspond with the color names, using a for loop. */

#include <iostream>
using namespace std;    

enum Colors {RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET};

const char* colorName(Colors color) {
    switch (color) {
        case RED: return "RED";
        case ORANGE: return "ORANGE";
        case YELLOW: return "YELLOW";
        case GREEN: return "GREEN";
        case BLUE: return "BLUE";
        case INDIGO: return "INDIGO";
        case VIOLET: return "VIOLET";
        default: return "UNKNOWN";
    }
}

int main() {
    for (int i = RED; i <= VIOLET; i++) {
        Colors color = static_cast<Colors>(i);
        cout << colorName(color) << " = " << i << endl;
    }
    return 0;
} ///:~
