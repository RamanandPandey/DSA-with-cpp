#include<iostream>
using namespace std;
void check_eligibilty(int ages){

    if(ages>=18 ){
        if(ages>=18 && ages<=100){
        cout<<"Yes! you are eligible for Vote.. \nVote For Only BJP"<<endl;
        }
        else{
            cout<<"BABA Ab to Bas Karo \nAb kitna vote daaloge"<<endl;
        }
    }
    
    else if(ages<18 && ages>0){
        cout<<"Sorry Chhote! You are not eligible For Vote now.\nPahle Bade Ho Jao"<<endl;
    }
    else{
        cout<<"Sorry! Enter a valid age"<<endl;
    }

}
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    check_eligibilty(age);

    return 0;
}