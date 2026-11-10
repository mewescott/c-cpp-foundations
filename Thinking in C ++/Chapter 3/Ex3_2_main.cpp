//: C02:Ex3_2_main.cpp
/*Write a program that uses two nested for loops and the modulus operator (%) to detect and print
 prime numbers (integral numbers that are not evenly divisible by any other numbers except for 
 themselves and 1).*/

#include <iostream>
using namespace std;

int main() {  
    // Loop through numbers from 2 to 100
    for (int num = 2; num <= 100; ++num) {  
        // Assume num is prime until shown otherwise
        bool isPrime = true; 
        // Check if num is divisible by any number from 2 to num/2 
        for (int i = 2; i <= num / 2; ++i) { 
            // If num is divisible by i, then it is not prime 
            if (num % i == 0) { 
                // num is divisible by i, so it is not prime
                isPrime = false; 
                // No need to check further, break out of the loop
                break; // Exit the inner loop early since we found a divisor
            }
        }
        if (isPrime) { // If num is prime, print it
            cout << num << " "; // Print the prime number followed by a space
        }
    }
    cout << endl; // Print a newline at the end for better formatting
}
