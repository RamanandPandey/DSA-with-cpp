#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "the value of a after swap\n"
         << a << endl
         << "the value of b after swap\n"
         << b;
    return 0;
}