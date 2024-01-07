#include <bits/stdc++.h>
using namespace std;
void is_odd(int n,int m){
    
    for(int i=n;i<=m;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    
    }
}
int main()
{
    int r,s;
    cout<<"enter the starting no \nFrom where you want to find odd number"<<endl;
    cin>>r;
        cout<<"------------------------------"<<endl;

    cout<<"enter the last point till that you want to calculate the odd number"<<endl;
    cin>>s;
    cout<<"------------------------------"<<endl;
    is_odd(r,s);
    return 0;
}