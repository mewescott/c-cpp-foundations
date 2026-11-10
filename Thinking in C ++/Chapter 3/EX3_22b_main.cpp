//: C03:Ex3_22b_main.cpp

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

//: C03:Ex3_22b_main.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
  cout << "EX3_22b: using atof() to convert command-line arguments to double" << endl;
  cout << "Argument count (excluding program name): " << (argc - 1) << endl;

  if(argc < 2) {
    cout << "No arguments provided." << endl;
    cout << "Example: ./EX3_22b_main 3.14 -2.5 10e2 text 7.2abc" << endl;
    return 0;
  }

  for(int i = 1; i < argc; i++)
    cout << "argv[" << i << "] = \"" << argv[i] << "\" -> atof = " << atof(argv[i]) << endl;

  cout << "Note: atof() returns 0 for invalid leading text and stops at first invalid character." << endl;

  return 0;
} ///:~