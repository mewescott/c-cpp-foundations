//: C02:Ex3_9_main.cpp
/*
Compile and run Static.cpp. Remove the static keyword from the code, compile and run it again, 
and explain what happens..*/

//: C03:Static.cpp
// Using a static variable in a function
#include <iostream>
using namespace std;

void func() {
  //static int i = 0;
  int i = 0;
  cout << "i = " << ++i << endl;
}

int main() {
  for(int x = 0; x < 10; x++)
    func();
} ///:~