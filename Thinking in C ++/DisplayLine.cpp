//: C02: DisplayLine.cpp
// Display one line of text from a file each time the user presses Enter
#include <iostream>
#include <fstream>
using namespace std;   

int main() {

  ifstream in("DisplayLine.cpp");
  string line;
    while(getline(in, line)) {
        cout << line << endl;
        cout << "Press Enter to continue...";
        cin.get(); // Wait for user to press Enter
    }
}