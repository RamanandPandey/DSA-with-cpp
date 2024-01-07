#include<iostream>
using namespace std;
int main(){
    string pass="baba12";
 string str;
    while(true){
        cout<<"enter your log in password"<<endl;
        cin>>str;
        if(str==pass){
           cout<<"password matched: \nyou are log in now"<<endl;
           break;
        }
        else{
            cout<<"\npassword incorrect! Try again: "<<endl;

        }
    }
    return 0;
}