#include <iostream>

using namespace std;

int main ()
{
    const char* str = "Hello, World!";
    
    int N = 0;
    cin >> N;
    for (; N-- > 0;)
    {
        cout << str << endl;
    }
    return 0;
}