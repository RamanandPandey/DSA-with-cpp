#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(8);
    cout << "enter your element " << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> v[i];
        if (i <= 6)
        {
            cout << "enter your next element" << endl;
        }
    }
    int x, occurance = -1;
    cout << "enter your searching element" << endl;
    cin >> x;

    // to traverse from vectors first point

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (x==v[i])
    //     {
    //         occurance = i;
    //     }
    // }

    // to traverse from vectors last point
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurance = i;
            break;
        }
    }
    cout << occurance;
    return 0;
}