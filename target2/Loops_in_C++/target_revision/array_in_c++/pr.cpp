#include<iostream>
using namespace std;
int main(){
    int age[]={18,20,30,35,36,12};
    age[2]=25;
    int size=sizeof age /sizeof age[0];
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<"The value at index "<<i<<" is "<<age[i]<<endl;
    }

    int j=0;
    while(j<size){
        cout<<age[j]<<endl;
        j++;
    }
    int k=0;
    do{
        cout<<age[k]<<"  ";
        k++;
    }while(k<size);
    return 0;
}