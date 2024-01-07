#include<iostream>
using namespace std;
int main(){
    int line,i,number;
    cout<<"enter the number input"<<endl;
    cin>>number;
    for(line=0;line<number;line++){
        for(i=0;i<number;i++){
            if(i==number/2){
                cout<<"*";
            }
            else if(line==number/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}