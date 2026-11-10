//: C02:Radius.cpp
// Calculates area of a circle from user input radius
#include <iostream>
using namespace std;

int main() {
  double radius;
  cout << "Enter a circle radius in floating point representation: ";
  cin >> radius;
  cout << "The area of a circle of radius " << radius
       << " is " << 3.14159 * radius * radius << endl;
       
} ///:~