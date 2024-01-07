#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool is_prime(int num)
{
    // for (int i = 2; i*i<=num ; i++)
    // for (int i = 2; i<=(num-1) ; i++)

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cout << "enter the starting point" << endl;
    cin >> n;
    cout << "enter the last point" << endl;
    cin >> m;
    cout << "--------------------------" << endl;
    for (int i = n; i <= m; i++)
    {
        if (is_prime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}