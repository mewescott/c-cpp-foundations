//: C03:Ex3_19_main.cpp

/*Modify ArrayAddresses.cpp to work with the data types char, long int, float, and double.*/

//: C03:ArrayAddresses.cpp
#include <iostream>
using namespace std;

int main() {
  char a[10];
  cout << "sizeof(char) = "<< sizeof(char) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&a[" << i << "] = " 
         << (long)&a[i] << endl;

  long int b[10];
  cout << "sizeof(long int) = "<< sizeof(long int) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&b[" << i << "] = " 
         << (long)&b[i] << endl;

  float c[10];
  cout << "sizeof(float) = "<< sizeof(float) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&c[" << i << "] = " 
         << (long)&c[i] << endl;

  double d[10];
  cout << "sizeof(double) = "<< sizeof(double) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&d[" << i << "] = " 
         << (long)&d[i] << endl;
} ///:~