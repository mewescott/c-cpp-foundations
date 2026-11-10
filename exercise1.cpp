#include <iostream>

using namespace std;

int main ()
{
    const char* str = "Hello, World!";
    
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cout << str << endl;
    }
    return 0;
}