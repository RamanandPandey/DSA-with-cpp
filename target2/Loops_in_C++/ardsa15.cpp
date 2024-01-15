#include <iostream>
using namespace std;

// code for find 2nd largest element in the array..

int largestelementindex(int array[], int size)
{
    int max = INT8_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}
int main()
{
    int ar[] = {1, 2, 3, 4, 7, 6, 8, 2, 5, 8};
    int size = sizeof ar / sizeof ar[0]; //11
    int largesteleindex = largestelementindex(ar, size);
    cout << ar[largesteleindex] << endl;
    int largestlement = ar[largesteleindex];
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == largestlement)
        {
            ar[i] = -1;
        }
    }
    int secondlargeele = largestelementindex(ar, size);
    cout << ar[secondlargeele];
}