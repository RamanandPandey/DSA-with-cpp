#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n){
        
        sum=sum+i;
        i++;
    }
            cout<<sum<<endl;

    return 0;
}