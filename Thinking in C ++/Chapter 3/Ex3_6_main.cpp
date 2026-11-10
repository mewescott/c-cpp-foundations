//: C02:Ex3_6_main.cpp
/*
Modify YourPets2.cpp so that it uses various different data types (char, int, float, double, and
 their variants). Run the program and create a map of the resulting memory layout. If you have 
 access to more than one kind of machine, operating system, or compiler, try this experiment 
 with as many variations as you can manage.
*/

//: C03:YourPets2.cpp
#include <iostream>
using namespace std;

// int dog, cat, bird, fish;
char dog;
int cat;
float bird;
double fish;    

void f(int pet) {
  cout << "pet id number: " << pet << endl;
}

int main() {
  int i, j, k;
  cout << "f(): " << (long)&f << endl;
  cout << "dog: " << (long)&dog << endl;
  cout << "cat: " << (long)&cat << endl;
  cout << "bird: " << (long)&bird << endl;
  cout << "fish: " << (long)&fish << endl;
  cout << "i: " << (long)&i << endl;
  cout << "j: " << (long)&j << endl;
  cout << "k: " << (long)&k << endl;
} ///:~