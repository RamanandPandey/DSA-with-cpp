#include <bits/stdc++.h>
using namespace std;
// Linear search

int main()
{
    int array[5];
    cout << "enter the element" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
        if (i < 5 - 1)
        {
            cout << "enter the next element" << endl;
        }
    }
    int size = sizeof array / sizeof array[0];
    int num;
    cout << "Enter the element whixh do you want to search" << endl;
    cin >> num;
    cout << "----------------" << endl;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (num == array[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}