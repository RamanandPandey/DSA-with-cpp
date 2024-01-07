#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"kitne digit ka addition krna krna hai"<<endl;
    cin>>n;
    int sum =0;
    do{
        int num;
        cout<<"ab number daaliye"<<endl;
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);
    cout<<sum;
    return 0;
}