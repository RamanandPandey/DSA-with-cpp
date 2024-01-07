#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age please"<<endl;
    cin>>age;
    if(age>15){
        if(age>18&&age<80){
            cout<<"you can vote now";
        }
        else{
            cout<<"you can not vote ";
        }


    }
    else{
        cout<<"you are BACHHA";
    }
    return 0;
}