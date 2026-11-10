//: C02:Ex3_1_function.cpp
/*Create a header file (with an extension of ‘.h’). In this file, 
declare a group of functions by varying the argument lists and return values from among the 
following: void, char, int, and float. Now create a .cpp file that includes your header file 
and creates definitions for all of these functions. Each definition should simply print out 
the function name, argument list, and return type so you know it’s been called. Create a second
 .cpp file that includes your header file and defines int main( ), containing calls to all of 
 your functions. Compile and run your program.*/

#include "Ex3_1_header.h"
#include <iostream>
using namespace std;
void function1() {
    cout << "function1() called. Return type: void, Argument list: none" << endl;
}

char function2() {
    cout << "function2() called. Return type: char, Argument list: none" << endl;
    return 'a';
}

int function3() {
    cout << "function3() called. Return type: int, Argument list: none" << endl;
    return 0;
}

float function4() {
    cout << "function4() called. Return type: float, Argument list: none" << endl;
    return 0.0f;
}
