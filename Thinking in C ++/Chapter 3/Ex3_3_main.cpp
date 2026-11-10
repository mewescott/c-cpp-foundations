//: C02:Ex3_3_main.cpp
/*Write a program that uses a while loop to read words from standard input (cin) into a string. 
This is an “infinite” while loop, which you break out of (and exit the program) using a break 
statement. For each word that is read, evaluate it by first using a sequence of if statements 
to “map” an integral value to the word, and then use a switch statement that uses that integral 
value as its selector (this sequence of events is not meant to be good programming style; it’s 
just supposed to give you exercise with control flow). Inside each case, print something 
meaningful. You must decide what the “interesting” words are and what the meaning is. You must 
also decide what word will signal the end of the program. Test the program by redirecting a file 
into the program’s standard input (if you want to save typing, this file can be your program’s 
source file).*/

#include <iostream>
using namespace std;

int main() {  
    string word;
    while (true) { // Infinite loop
        cout << "Enter a word (or 'exit' to quit): ";
        cin >> word; // Read a word from standard input
        
        if (word == "exit") { // Check for exit condition
            cout << "Exiting the program." << endl;
            break; // Exit the loop and end the program
        }
        
        int value = 0; // Default value for unrecognized words
        
        // Map specific words to integral values
        if (word == "hello") {
            value = 1;
        } else if (word == "world") {
            value = 2;
        } else if (word == "foo") {
            value = 3;
        } else if (word == "bar") {
            value = 4;
        }
        
        // Use a switch statement to print something meaningful based on the value
        switch (value) {
            case 1:
                cout << "You entered 'hello'!" << endl;
                break;
            case 2:
                cout << "You entered 'world'!" << endl;
                break;
            case 3:
                cout << "You entered 'foo'!" << endl;
                break;
            case 4:
                cout << "You entered 'bar'!" << endl;
                break;
            default:
                cout << "Unrecognized word: " << word << endl;
                break;
        }
    }
}
