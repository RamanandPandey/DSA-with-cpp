#include<iostream>
using namespace std;
int fun(int n){
    if(n>0&&n<10){
        return fun(n+1)+n;

    }
    return 0;
}
int main(){
int x=5;
int c=fun(x);
cout <<c;
    return 0;
}