#include <iostream>

using namespace std;

int main ()
{
    const char* str = "Hello, World!";
    
    int N = 0;
    int i = 0;
    cin >> N;
    while (i <N)
    {
        cout << str << endl;
        i++;
    }
    return 0;
}