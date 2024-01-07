#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
        cout<<"----------------------"<<endl;

    if(num%2==0 || num%3==0){
        cout<<num<<"\nthis number is divisible";
    }
    else{
        cout<<num<<"\nthis number is not divisible by as the given condition";
    }
    return 0;
}