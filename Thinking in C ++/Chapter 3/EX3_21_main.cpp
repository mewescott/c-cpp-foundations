//: C03:Ex3_21_main.cpp

/* Create an array of string objects and assign a string to each element. Print out the array 
using a for loop.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string arr[5] = {"Hello", "World", "This", "Is", "C++"};
  for(int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
}
