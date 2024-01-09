#include<iostream>
using namespace std;
int power(int x,int y){
    if(y==0){
        return 1;

    }
    else{
        return power(x,(y-1))*x;
    }
}
int main(){
    int n,m;
    cout<<"enter the both no"<<endl;
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}