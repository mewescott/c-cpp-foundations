//: C02:VectorFloat.cpp
//Create a vector<float> and put 25 numbers into it as in the previous exercises. 
// Now square each number and put the result back into the same location in the 
// vector. Display the vector before and after the multiplication.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> v;
    double randomNum;
    
    for (int i = 0; i < 25; i++) {
        randomNum = static_cast<double>(rand()) / RAND_MAX;
        v.push_back(randomNum); // Add floating-point numbers
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 25; i++) {
        cout << v[i] << "^2 = " << v[i] * v[i] << endl;
    }

}