#include<iostream>
using namespace std;
void funA(int n);
void funB(int n);

int main(){
    int x=1000;
    cout<<"enter your no "<<endl;
    cin>>x;
    cout<<"----------------"<<endl;
    funA(x);
    return 0;
}
void funA(int n){
    if(n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n){
    if(n>0){
        cout<<n<<endl;
        funA(n/2);
    }
}