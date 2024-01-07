#include<iostream>
using namespace std;
int main(){
    int num1=6; //0110
    cout<<(num1<<2)<<endl; //24
    cout<<(num1>>1)<<endl; //3
    int num2=5; //0101
    cout<<(num1&num2)<<endl;//4
    cout<<(num1|num2)<<endl;//7

    return 0;
}