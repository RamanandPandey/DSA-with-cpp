#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v(8);
    cout<<"enter your element: "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int x;
    int count=0;
    cout<<endl;
    cout<<"enter x: ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            count+=1;
        }
       
    }
    cout<<"the total occurance of  element : "<<x<<" in the vector is : " <<count;
    return 0;
}