//: C02:Ex3_12a_main.cpp
/*Modify Boolean.cpp so it uses the explicit operators (if your compiler is 
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

//: C03:Boolean.cpp
// Relational and logical operators.
#include <iostream>
using namespace std;

int main() {
  double i,j;
  cout << "Enter a double: ";
  cin >> i;
  cout << "Enter another double: ";
  cin >> j;
  cout << "i > j is " << (i > j) << endl;
  cout << "i < j is " << (i < j) << endl;
  cout << "i >= j is " << (i >= j) << endl;
  cout << "i <= j is " << (i <= j) << endl;
  cout << "i == j is " << (i == j) << endl;
  cout << "i != j is " << (i != j) << endl;
  cout << "i and j is " << (i and j) << endl;
  cout << "i or j is " << (i or j) << endl;
  cout << " (i < 10) and (j < 10) is "
       << ((i < 10) and (j < 10))  << endl;
} ///:~