#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ars[]={3,5,8,20,10};
    int sum=0,size;
    size=sizeof ars/sizeof ars[0];
    for(int i=0 ;i<size;i++){
        sum=sum+ars[i];
    }
    cout<<"The total sum of array"<<endl<<sum;
    return 0;
}