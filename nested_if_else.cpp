#include<iostream>
using namespace std;
int main(){
    int money;
    cout<<"enter the money you have right now"<<endl;
    cin>>money;
    if(money>=5){
        if(money>5 && money<=10){
            cout<<"you will able to buy a packet PARLE G in this money ";
        }
        if(money>10 && money<=20){
            cout<<"you will able to buy to a BURGER "<<endl;

        }
        
        if(money>20 && money <=50){
            cout<<"you are able to buy one of these thing "<<endl<<"1.PANNER ROLL \n2.HALF PLATE OF CHIKEN BIRYANI \n3.CHHOLE AND KULCHHE \n4.HALF PACK OF JAAR \n5.FULL PLATE OF CHICKEN MOMOS"<<endl;
        }
        if(money >50 &&  money <=100){
            cout<<"you are able to buy one of these things such that"<<endl<<"1.FIVE PCS OF SPONGE RASGULLAH \n2.ONE PLATE BUTTER PANNER ";
        }
        else{

       cout<<"Aap to MAHARAJA NIKLE YAAR";
        }

    }
    else{
        cout<<"Pahle Paise KA jugad kr tab market me aaya kar thik na"; 
    }
    return 0;
}