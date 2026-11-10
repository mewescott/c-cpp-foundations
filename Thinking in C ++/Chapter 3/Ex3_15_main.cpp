//: C02:Ex3_15_main.cpp
/* Create a struct that holds two string objects and one int. Use a typedef for the struct name. Create an instance of the struct, initialize all three values in your instance, and print them out. Take the address of your instance and assign it to a pointer to your struct type. Change the three values in your instance and print them out, all using the pointer.*/
// We need to use a typdef to give the struct a name, otherwise we would have to write "struct Ex3_15_main" every time we want to use it. By using a typedef, we can simply write "Ex3_15_main" instead. This makes our code cleaner and easier to read.

#include <iostream>
#include <string>
using namespace std;   

typedef struct Ex3_15_main
{
    string str1;
    string str2;
    int num;
} Ex3_15_main;

int main() {
    Ex3_15_main myStruct{"Hello", "World", 42};
    cout << "Initial values: " << myStruct.str1 << ", " << myStruct.str2 << ", " << myStruct.num << endl;

    Ex3_15_main* ptr = &myStruct;
    ptr->str1 = "Goodbye";
    ptr->str2 = "Everyone";
    ptr->num = 24;

    cout << "Updated values: " << ptr->str1 << ", " << ptr->str2 << ", " << ptr->num << endl;

    return 0;
} ///:~
 