#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;

    }
    cout<<sum<<endl;
    int j=1;
    for(; j<=20;j+=2){
        cout<<j<<endl;
    }
    int k=1;
    for(;   ; ){
        k<=10;
       

        cout<<k<<endl;
         k++;
       

    }

    return 0;
}