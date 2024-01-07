#include <bits/stdc++.h>
using namespace std;
int main()
{
    char vowel[5];
    cout << "enter the  vowel" << endl;
    for (int i = 0; i < 5; i++)
    {

        cin >> vowel[i];
        if (i < 5 - 1)
        {
            cout << "enter the next vowel" << endl;
        }
    }
    
    cout<<"===================="<<endl;
    cout << "The vowels are" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << vowel[j] << endl;
    }
    //taking input from for each loop
    for(char &element:vowel){
        cin>>element;
    }
    for(int i=0;i<5;i++){
        cout<<vowel[i]<<" ";
    }
    return 0;
}