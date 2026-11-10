//: C03:Ex3_20_main.cpp

/*
Apply the technique in ArrayAddresses.cpp to print out the size of the struct and the addresses 
of the array elements in StructArray.cpp.

//: C03:ArrayAddresses.cpp
#include <iostream>
using namespace std;

int main() {
  int a[10];
  cout << "sizeof(int) = "<< sizeof(int) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&a[" << i << "] = " 
         << (long)&a[i] << endl;
} ///:~
*/

//: C03:StructArray.cpp
// An array of struct
#include <iostream>
using namespace std; 

typedef struct {
  int i, j, k;
} ThreeDpoint;

int main() {
  ThreeDpoint p[10];
  cout << "sizeof(ThreeDpoint) = " << sizeof(ThreeDpoint) << endl;
  for(int i = 0; i < 10; i++) {
    p[i].i = i + 1;
    p[i].j = i + 2;
    p[i].k = i + 3;
    cout << "&p[" << i << "] = " << (long)&p[i] << endl;
  }
} ///:~