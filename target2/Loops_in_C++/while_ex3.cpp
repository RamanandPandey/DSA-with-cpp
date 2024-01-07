#include<iostream>
using namespace std;
int main(){
    int i=5;
    while(true){
        if(i%8==0){
        cout<<i;
     
        break;
        }
           i+=5; 
    }
    return 0;
}