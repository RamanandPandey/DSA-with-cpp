#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks in percentage" << endl;
    cin >> marks;
    if (marks > 0 && marks < 35)
    {
        cout << "you have failed" << endl;
    }
    else if (marks >= 35 && marks <= 45)
    {
        cout << "Good! \nyou have passed and got 3rd division";
    }
    else if (marks > 45 && marks < 60)
    {
        cout << "Nice! \nyou have passed and you got 2nd division" << endl;
    }
    else if (marks >= 60 && marks <= 100)
    {
        cout << "Excllent! \nyou have passed an d got 1st division" << endl;
    }

    else
        cout << "enter a valid marks between the range of 0 to 100";

    return 0;
}
