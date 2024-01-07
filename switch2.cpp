#include<iostream>
using namespace std;
int main(){
    char chars;
    cout<<"enter a character"<<endl;
    cin>>chars;
    if(chars=='a'||chars=='e'||chars=='i'||chars=='o'||chars=='u'){
        cout<<chars<<endl<<"this is vowel";
    }
    else{
        cout<<chars<<endl<<"this is consonants"<<endl;
    }

    int c=2;
    switch(c){
        case 1:
        cout<<"java"<<endl;
        case 2:
        cout<<"python"<<endl;
        default:
        cout<<"cpp"<<endl;
    }
    return 0;
}