#include <iostream>
using namespace std;
int main()
{
    int a[6];
    cout << "enter your element" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];

        if (i<5)
        {
        cout << "Enter your next element" << endl;
        }
    }
    cout<<"----------------------"<<endl;
    cout<<"The elements of array are"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] <<"\t";
    }
    return 0;
}