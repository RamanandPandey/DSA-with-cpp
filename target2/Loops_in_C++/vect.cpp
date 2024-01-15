#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << "enter your vector element" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        // int element;
        // cin >> element;
        // v.push_back(element);
        if (i < 4)
        {
            cout << "enter your next element" << endl;
        }
    }
    // cout << "The element in vector is:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // traverse tbhrough for each loop..

    for (int ele : v)
    {
        cout << ele << " ";
    }

    // To traverse from do- while loop
    cout << endl;
    v.insert(v.begin() + 3, 800);

    int i = 0;
    do
    {
        cout << v[i++] << " ";

    } while (i < v.size());

    // traverse through while loop

    cout << endl;

    v.erase(v.end() - 2);
    int idx = 0;
    while (idx < v.size())
    {
        cout << v[idx] << " ";
        idx++;
    }

    return 0;
}