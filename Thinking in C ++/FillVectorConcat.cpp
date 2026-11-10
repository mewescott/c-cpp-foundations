//: C02:FillVectorConcat.cpp
// Copy an entire file into a vector of string
// Change Fillvector.cpp so that it concatenates all the elements in the vector into a single string before printing it out, but don’t try to add line numbering.
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  string concatenated;
  ifstream in("FillVectorConcat.cpp");
  string line;
  while(getline(in, line))
    v.push_back(line); // Add the line to the end
  // Add line numbers:
  for(int i = 0; i < v.size(); i++)
  {
    cout << i << ": " << v[i] << endl;
    concatenated += v[i];
    
  }  
  cout << concatenated << endl;
  
} ///:~