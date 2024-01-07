#include<iostream>
using namespace std;
int main(){
    char vowel []={'a','e','i','o','u'};
 char *p=vowel;
 cout<<*p;
    for(int i=0;i<4;i++){
       cout<<vowel[i]<<endl;
    }
    return 0;

}