//: C03:Ex3_18_main.cpp

/*Create a program that defines two int arrays, one right after the other. Index off the end of 
the first array into the second, and make an assignment. Print out the second array to see the 
changes cause by this. Now try defining a char variable between the first array definition and 
the second, and repeat the experiment. You may want to create an array printing function to 
simplify your coding.*/

//: C03:Ex3_18_main.cpp
#include <iostream>
#include <cstddef>
using namespace std;

void printArray(const char* label, const int arr[], size_t size) {
    cout << label;
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

struct TwoArrays {
    int arr1[5];
    int arr2[5];
};

struct ArraysWithCharBetween {
    int arr1[5];
    char ch;
    int arr2[5];
};

int main() {
    cout << "Experiment 1: two int arrays adjacent in one object" << endl;
    TwoArrays e1 = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}};

    printArray("arr2 before: ", e1.arr2, 5);
    cout << "&arr1[0]=" << static_cast<const void*>(&e1.arr1[0])
         << ", &arr1[5]=" << static_cast<const void*>(&e1.arr1[5])
         << ", &arr2[0]=" << static_cast<const void*>(&e1.arr2[0]) << endl;

    e1.arr1[5] = 99;
    printArray("arr2 after arr1[5]=99: ", e1.arr2, 5);
    cout << endl;

    cout << "Experiment 2: char between the arrays in one object" << endl;
    ArraysWithCharBetween e2 = {{1, 2, 3, 4, 5}, 'A', {10, 20, 30, 40, 50}};

    printArray("arr2 before: ", e2.arr2, 5);
    cout << "&arr1[0]=" << static_cast<const void*>(&e2.arr1[0])
         << ", &arr1[5]=" << static_cast<const void*>(&e2.arr1[5])
         << ", &ch=" << static_cast<const void*>(&e2.ch)
         << ", &arr2[0]=" << static_cast<const void*>(&e2.arr2[0]) << endl;

    e2.arr1[5] = 88;
    printArray("arr2 after arr1[5]=88: ", e2.arr2, 5);

    cout << "ch after overwrite attempt: '" << e2.ch << "'" << endl;
    cout << "\nNote: both writes are undefined behavior; results are compiler/platform dependent." << endl;

    return 0;
} ///:~