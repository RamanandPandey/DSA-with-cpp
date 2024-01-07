#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"enter the number\nof which you want to calculate sum of digits:"<<endl;
     cin>>n;
     int sum=0;
     for(; n>0;n=n/10)
     {
        int lastdigit=n%10;
        sum=sum+lastdigit;


     }
     cout<<"The sum of digits:"<<endl<<sum;
    return 0;
}