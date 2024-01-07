#include<iostream>
using namespace std;
int main(){
    //triangular pattern
    int n;
    cout<<"enter the value of rows (n):"<<endl;
    cin>>n;
    cout<<"------------------"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}