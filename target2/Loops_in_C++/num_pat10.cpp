#include <iostream>
using namespace std;
int main()
{
    string st;
    while (true)
    {
        int n;

        if (st == "out")
        {
            break;
        }
        else
        {
            int m;
            cout << "enter another number : " << endl;

            cin >> m;
            int digit = 0;
            while (m > 0)
            {
                m = m / 10;
                digit++;
            }
            cout << digit;
        }
    }

    return 0;
}