#include<iostream>
using namespace std;
int square(int x ){
    int result=x*x;
    return result;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
     for(int i=0;i<=n;i++){
        cout<<square(i)<<endl;
     }
    return 0;
}