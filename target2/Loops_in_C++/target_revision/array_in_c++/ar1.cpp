#include <iostream>
using namespace std;
int main()
{
    int ar1[] = {10, 15, 20, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    int size = sizeof ar1 / sizeof ar1[0];

    // traverse through-> For  loop

    for (int idx = 0; idx < size; idx++)
    {
        cout << ar1[idx] << endl;
    }
    cout << "---------------------------" << endl;
    // traverse through-> For each loop
    for (int element : ar1)
    {
        cout << element << endl;
    }
    cout << "---------------------------" << endl;

    // traverse through-> while loop

    int i = 0;
    while (i < size)
    {
        cout << ar1[i] << endl;
        i++;
    }
    cout << "---------------------------" << endl;

    // traverse through-> Do-While loop

    int j = 0;
    do
    {
        cout << ar1[j] << endl;
        j++;
    } while (j < size);
    return 0;
}