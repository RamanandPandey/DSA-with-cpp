#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "enter array element" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int size = sizeof a / sizeof a[1];
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    bool flag = true;
    for (int i = 1; i < size; i++)
    {
        if (a[i] <= a[i - 1])
        {
            flag = false;
        }
    }
    cout << endl
         << flag;
    return 0;
}