#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    //rectangular pattern.
int n,m;
cout<<"enter the no of rows (n):"<<endl;
cin>>n;
cout<<"enter the no of columns (m):"<<endl;
cin>>m;
cout<<"-------------------"<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    int k = 1;
    int l = 1;
    while (k <= 3)
    {
        while (l <= 6)
        {
            cout << ".";
            l++;
        }
        cout << endl;
        k++;
    }
    return 0;
}
