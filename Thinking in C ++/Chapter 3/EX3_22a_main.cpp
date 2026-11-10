//: C03:Ex3_22a_main.cpp

/* Create two new programs starting from ArgsToInts.cpp so they use atol( ) and atof( ), 
respectively.

//: C03:ArgsToInts.cpp
// Converting command-line arguments to ints
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
  for(int i = 1; i < argc; i++)
    cout << atoi(argv[i]) << endl;
} ///:~
*/

//: C03:Ex3_22a_main.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
  cout << "EX3_22a: using atol() to convert command-line arguments to long" << endl;
  cout << "Argument count (excluding program name): " << (argc - 1) << endl;

  if(argc < 2) {
    cout << "No arguments provided." << endl;
    cout << "Example: ./EX3_22a_main 42 -17 999999 notANumber" << endl;
    return 0;
  }

  for(int i = 1; i < argc; i++)
    cout << "argv[" << i << "] = \"" << argv[i] << "\" -> atol = " << atol(argv[i]) << endl;

  cout << "Note: atol() returns 0 for invalid leading text and stops at first non-numeric character." << endl;

  return 0;
} ///:~