#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a power b: "<<endl<<"enter a:"<<endl;
cin>>a;
cout<<"enter b:"<<endl;
cin>>b;
int result=1;
for(int i=1;i<=b;i++){
    result=result*a;
}
    cout<<result<<endl;

    return 0;
}  