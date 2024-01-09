#include <iostream>
using namespace std;
int sum1(int n)
{
    return n * (n + 1) + n / 2;
}
int sum(int n)
{
    if (n == 0)

    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
int sum2(int n)
{
    int i, s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}
int main()
{
    int y;
    cout << "Enter the value of which you want to calculate sum \nusing for loop" << endl;
    cin >> y;
    cout << "The sum using for loop is :\n"
         << sum2(y) << endl;
    cout << "---------------------------" << endl;

    int x = 900;
    cout << "enter the number of which you want calculate the sum using recursion" << endl;
    cin >> x;
    int result = sum(x);
    cout << "the sum of n natural number using recursion  is : \n"
         << result << endl;
    cout << "---------------------------" << endl;
    cout << "ye " << sum1(5) << " result kiska hai hamko v nhi pta hai" << endl;
    cout << sum1(5);

    return 0;
}
