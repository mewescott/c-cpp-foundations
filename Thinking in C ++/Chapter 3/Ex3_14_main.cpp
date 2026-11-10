//: C02:Ex3_14_main.cpp
/* Modify Ifthen.cpp to use the ternary if-else operator (?:) instead of if-else statements.*/


//: C03:Ifthen.cpp
// Demonstration of if and if-else conditionals
#include <iostream>
using namespace std;

int main() {
  int i;
  cout << "type a number and 'Enter'" << endl;
  cin >> i;
  cout << (i > 5 ? "It's greater than 5" : (i < 5 ? "It's less than 5 " : "It's equal to 5 ")) << endl;

  cout << "type a number and 'Enter'" << endl;
  cin >> i;
  cout << (i < 10 ? (i > 5 ? "5 < i < 10" : "i <= 5") : "i >= 10") << endl;
} ///:~
