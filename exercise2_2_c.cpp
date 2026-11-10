#include <iostream>

using namespace std;

int main ()
{
    const char* str = "Hello, World!";
    
    int N = 0;
    cin >> N;
    do
    {
        cout << str << endl;
    } while (--N >0);
    return 0;
}