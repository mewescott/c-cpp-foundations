//: C03:Ex3_17_main.cpp

/*Experiment with Union.cpp by removing various union elements to see the effects on the size 
of the resulting union. Try assigning to one element (thus one type) of the union and printing 
out a via a different element (thus a different type) to see what happens.*/

//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
using namespace std;

union Packed { // Declaration similar to a class
  char i;
  short j;
  int k;
 // long l;
 // float f;
//  double d;  
  // The union will be the size of a 
  // double, since that's the largest element
};  // Semicolon ends a union, like a struct

int main() {
  cout << "sizeof(Packed) = " 
       << sizeof(Packed) << endl;
  Packed x;
  x.i = 'c';
  cout << x.i << endl;
  x.k = 3;
  cout << x.k << endl;
} ///:~
