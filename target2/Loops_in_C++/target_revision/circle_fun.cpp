#include<iostream>
using namespace std;
void circle_area(int r){
    
    cout<<"--------------------------"<<endl;
    float pi=3.14;
    float area,circumference;
    area=pi*r*r;
    cout<<"The area of circle is \n->  "<<area<<endl;
    circumference=2*pi*r;
        cout<<"--------------------------"<<endl;

    cout<<endl<<"The cicumference of the circle is \n->  "<<circumference<<endl;
        cout<<"--------------------------"<<endl;


}
int main(){
    int r;
    cout<<"enter the radius of circle "<<endl;
    cin>>r;
circle_area(r);
    return 0;
}