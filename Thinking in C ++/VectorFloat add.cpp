//: C02:VectorFloat add.cpp
//Create three vector<float> objects and fill the first two as in the previous 
// exercise. Write a for loop that adds each corresponding element in the first 
// two vectors and puts the result in the corresponding element of the third 
//vector. Display all three vectors.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> v1;
    vector<float> v2;
    vector<float> v3;
    
    double randomNum;
    
    for (int i = 0; i < 25; i++) {
        randomNum = static_cast<double>(rand()) / RAND_MAX;
        v1.push_back(randomNum); // Add floating-point numbers to v1
        randomNum = static_cast<double>(rand()) / RAND_MAX;
        v2.push_back(randomNum); // Add floating-point numbers to v2
        v3.push_back(v1[i] + v2[i]); // Add corresponding elements and store in v3
    }
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v3.size(); i++) {
        cout << v1[i] << " + " << v2[i] << " = " << v3[i] << " ";
        cout << endl;
    }

}