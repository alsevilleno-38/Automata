#include <iostream>

_declspec(dllexport) void display()
{
    using namespace std;
    cout << "[Display]" << endl;
}