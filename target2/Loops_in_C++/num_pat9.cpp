#include<iostream>
using namespace std;
int main(){

    //to find the length of the digit of the given number 
    //by for loops
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    int digits=0;
    for(; n>0;digits++){
        n=n/10;
    }
    cout<<digits<<endl;

    int m;
        cout<<"enter another number : "<<endl;

    cin>>m;
    int digit=0;
    while(m>0){
        m=m/10;
                digit++;

    }
    cout<<digit;
    return 0;
}