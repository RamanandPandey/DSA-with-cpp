#include <bits/stdc++.h>
using namespace std;
// code for find 2nd largest element in the array..
int secondmaxele(int arr[],int size){
    int max=INT_MIN;
    int Secondmax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        
        }

    }
    cout<<max<<endl;
    for(int j=0;j<size;j++){
        if(arr[j]>Secondmax && arr[j]!=max){
            Secondmax=arr[j];
        }
    }
    cout<<Secondmax<<endl;
    return 90;

}
int main()
{
   int ar[]={2,5,6,7,8,19,5,4,19,78,4,78,78,6,};
   int size= sizeof ar/sizeof ar[0];
   int secondlarge=secondmaxele(ar,size);
   cout<<secondlarge+2;
    return 0;
}