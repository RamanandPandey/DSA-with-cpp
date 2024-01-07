#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"the value of a is "<<a<<endl<<"and the value of b is  "<<b;
    return 0;
} 