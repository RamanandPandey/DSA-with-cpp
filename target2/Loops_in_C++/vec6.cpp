#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(8);
    cout<<"enter the elements: "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    int x;
    cout<<"enter x: ";
    cin>>x;
    int count=0;
    for(int i=0; i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"the elment in the vector which is grester than \t"<<x<<" is: \t "<<count;
    return 0;
}