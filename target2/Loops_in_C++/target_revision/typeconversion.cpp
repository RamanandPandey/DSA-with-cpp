 #include<iostream>
 using namespace std;
 int main(){

       //explicit type conversion

    int x=64;
    char y=(char)x;
    cout<<y;

    int b=92;
    char c=(char)b;
    cout<<endl<<c;
    char v='C';
    int p=(int)v;
    cout<<endl<<p;

    int n=9;
    float m=(float)n;
    cout<<endl<<m;


    //implicit type conversion


     char q='a';
     int r= q+5;
     cout<<"\n"<<char(r);
    return 0;
 }