#include <iostream>


_declspec(dllexport) void helper()
{
    using namespace std;
    cout << "[Helper]" << endl;
}