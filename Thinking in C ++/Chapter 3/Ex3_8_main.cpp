//: C02:Ex3_8_main.cpp
/*
Write a program that uses all the trigraphs to see if your compiler supports them.*/

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const char* probePath = "/tmp/ex3_8_trigraph_probe.cpp";
    ofstream probe(probePath);
    if (!probe) {
        cerr << "Failed to create probe source file: " << probePath << endl;
        return 1;
    }

    probe
        << "#include <iostream>\n"
        << "int main() " << "\?\?" "<\n"
        << "  int arr" << "\?\?" "(3" << "\?\?" ") = " << "\?\?" "<1,2,3" << "\?\?" ">;\n"
        << "  int x = 6, y = 3;\n"
        << "  std::cout << arr[1] << ' ' << (x " << "\?\?" "' y) << ' ' << (x " << "\?\?" "! y) << ' ' << (" << "\?\?" "-x) << '\\n';\n"
        << "  return 0;\n"
        << "\?\?" ">\n";
    probe.close();

    cout << "Trigraph support probe:" << endl;
    cout << "- Trying compile without -trigraphs (expected to fail on modern GCC):" << endl;
    int rcNoTri = system("g++-11 -std=gnu++17 /tmp/ex3_8_trigraph_probe.cpp -o /tmp/ex3_8_probe_no_tri >/dev/null 2>&1");
    cout << "  result code: " << rcNoTri << endl;

    cout << "- Trying compile with -trigraphs:" << endl;
    int rcTri = system("g++-11 -std=gnu++17 -trigraphs /tmp/ex3_8_trigraph_probe.cpp -o /tmp/ex3_8_probe_tri >/dev/null 2>&1");
    cout << "  result code: " << rcTri << endl;

    if (rcTri == 0) {
        cout << "- Running trigraph probe binary:" << endl;
        int rcRun = system("/tmp/ex3_8_probe_tri");
        cout << "  run code: " << rcRun << endl;
    } else {
        cout << "- Your compiler setup did not accept trigraphs with -trigraphs." << endl;
    }

    return 0;
} ///:~