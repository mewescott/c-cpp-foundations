//: C02:VectorFloat.cpp
//Create a vector<float> and put 25 floating-point numbers into it using a for loop. Display the vector.
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
}