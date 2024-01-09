#include <iostream>
using namespace std;
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int x =0;
    cout<<"enter the no of which you want to print sqare:"<<endl;
    cin>>x;
    cout<<"------------------"<<endl;
    cout <<"The Sqaure root of "<<x<<" is : "<< fun(x);
    return 0;
}