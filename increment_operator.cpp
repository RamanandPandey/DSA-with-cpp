#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    cout << a++ << endl; // 8
    int d = a + 5;       // 9+5
    cout << d << endl;   //=14
    cout << a++ << endl; // 9
    cout << a++ << endl; // 10
    cout << a++ << endl; // 11

    int b = 6;
    cout << ++b << endl;
    cout << ++b << endl;
        cout << b++ << endl;//8
    cout << b++ << endl;//9


    cout << ++a << endl;
    return 0;
}