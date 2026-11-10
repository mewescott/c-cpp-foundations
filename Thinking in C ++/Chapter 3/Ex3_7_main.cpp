//: C02:Ex3_7_main.cpp
/*
Create two functions, one that takes a string* and one that takes a string&. Each of these 
functions should modify the outside string object in its own unique way. In main( ), create and 
initialize a string object, print it, then pass it to each of the two functions, printing the 
results.*/

#include <iostream>
using namespace std;

void modifyStringPointer(string* str) {
    *str += " (modified by pointer)";
}

void modifyStringReference(string& str) {
    str += " (modified by reference)";
}


int main() {
    string myString = "Original string";
    cout << "Before modification: " << myString << endl;

    modifyStringPointer(&myString);
    cout << "After modifyStringPointer: " << myString << endl;

    modifyStringReference(myString);
    cout << "After modifyStringReference: " << myString << endl;

    return 0;
} ///:~