//: C02:Ex3_12b_main.cpp
/*Modify Bitwise.cpp so it uses the explicit operators (if your compiler is 
conformant to the C++ Standard it will support these).

Explicit operators
These are keywords for bitwise and logical operators. Non-U.S. programmers without keyboard characters like &, |, ^, and so on, were forced to use C’s horrible trigraphs, which were not only annoying to type, but obscure when reading. This is repaired in C++ with additional keywords:


Keyword

Meaning

and

&& (logical and)

or

|| (logical or)

not

! (logical NOT)

not_eq

!= (logical not-equivalent)

bitand

& (bitwise and)

and_eq

&= (bitwise and-assignment)

bitor

| (bitwise or)

or_eq

|= (bitwise or-assignment)

xor

^ (bitwise exclusive-or)

xor_eq

^= (bitwise exclusive-or-assignment)

compl

~ (ones complement)

If your compiler complies with Standard C++, it will support these keywords.



*/

//: C03:Bitwise.cpp
//{L} printBinary
// Demonstration of bit manipulation
#include "printBinary.h"
#include <iostream>
using namespace std;

// A macro to save typing:
#define PR(STR, EXPR) \
  cout << STR; printBinary(EXPR); cout << endl;  

int main() {
  unsigned int getval;
  unsigned char a, b;
  cout << "Enter a number between 0 and 255: ";
  cin >> getval; a = getval;
  PR("a in binary: ", a);
  cout << "Enter a number between 0 and 255: ";
  cin >> getval; b = getval;
  PR("b in binary: ", b);
  PR("a | b = ", a bitor b);
  PR("a & b = ", a bitand b);
  PR("a ^ b = ", a xor b);
  PR("~a = ", compl a);
  PR("~b = ", compl b);
  // An interesting bit pattern:
  unsigned char c = 0x5A; 
  PR("c in binary: ", c);
  a or_eq c;
  PR("a |= c; a = ", a);
  b and_eq c;
  PR("b &= c; b = ", b);
  b xor_eq a;
  PR("b ^= a; b = ", b);
} ///:~