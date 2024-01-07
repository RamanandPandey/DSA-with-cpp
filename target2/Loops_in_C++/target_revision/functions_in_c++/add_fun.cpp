#include<iostream>
using namespace std;
void sum();
void interest(int money,int time,int rate);

int main(){
    int a,b,c;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    interest(a,b,c);
    return 0;
}

void sum(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<a+b;
    
    return ;
}

void interest(int money,int time,int rate){
    int intrest=money*time*rate/100;
    cout<<intrest<<endl;
    sum();
}
