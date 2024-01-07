#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=100){
        if(i%6==0){
        
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}