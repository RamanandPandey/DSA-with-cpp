#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"enter a character from a to z"<<endl;
    cin>>character;
    cout<<"---------------------"<<endl;
    switch(character){
        case 'a':
        cout<<character<<endl<<"this character is a vowel ";
        break;
        case 'e':
        cout<<character<<endl<<"this is a vowel";
        break;
        case 'i':
        cout<<character<<endl<<"this is a vowel";
        break;
        case 'o':
        cout<<character<<endl<<"this is a vowel";
        break;
        case 'u':
        cout<<character<<endl<<"this is a vowel";
        break;
        default:
        cout<<character<<endl<<"this is a consonants";
    }
    return 0;

}