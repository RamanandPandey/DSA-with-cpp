#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *b= &a;
    //int *c;
    // c=&a;
    //both are same

    int **c=&b;
    cout<<c<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<b<<endl;
    cout<<**c<<endl;
    cout<<*b;
    return 0;
}