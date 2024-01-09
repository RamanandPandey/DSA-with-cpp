// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     int t0=0,t1=1,si,i;
//     if(n<=1){
//         return n;
//     }
    
//         for(i=2;i<=n;i++){
//             si=t0+t1;
//             t0=t1;
//             t1=si;


//         }
//         cout<<endl;
    
//     return si;
// }
// int main(){
//     int x;
//     cout<<"enter the number"<<endl;
//     cin>>x;
//     cout<<fibonacci(x);
//     return 0;
// }


#include<iostream>
using namespace std;

int fibonacci(int n) {
    int t0 = 0, t1 = 1, si, i;
    
    if(n <= 1) {
        return n;
    }

    for(i = 2; i <= n; i++) {
        si = t0 + t1;
        t0 = t1;
        t1 = si;
    }
    
    return si;
}

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    
    cout << "Fibonacci number at position " << x << ": " << fibonacci(x) << endl;
    
    return 0;
}
