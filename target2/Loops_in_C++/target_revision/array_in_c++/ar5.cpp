#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={20,32,12,245,23333,45};
    int size=sizeof ar/sizeof ar[0];
    int max=ar[0];
    for(int i=0;i<size;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
            cout<<max;

    return 0;
}