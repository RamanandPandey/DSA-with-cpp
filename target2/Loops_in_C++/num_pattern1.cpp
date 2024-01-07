#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the no of rows (n):"<<endl;
    cin>>n;
    cout<<"enter the no of column (m):"<<endl;
    cin>>m;
    cout<<"------------------------"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}