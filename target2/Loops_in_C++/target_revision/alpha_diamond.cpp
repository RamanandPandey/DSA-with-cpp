#include <iostream>
using namespace std;
int main()
{
    // taking input of which alpha pattern have to print
    int n;
    cout << "enter the input" << endl;
    cin >> n;
    // for upper triangle pattern ie. line 1 to 5.
    for (int line = 1; line <= n; line++)
    {
        // for printing of space in upper triangle pattern.
        int spaces = (n - line);
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        // for printing of alphabet in in upper triangle pattern.
        int no_of_chars = 2 * line - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            // for type conversion of int to char by the use of ascii value..
            char ch = (char)('A' + j);
            cout << ch;
        }
        // after printong of one alpha . insert one new line.

        cout << endl;
    }
    // upper patttern has completed now moves to the bellow triangle pattern.ie. line 6 to 9
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        // for printing of space in below pattern.
        for (int l = 0; l < (line - n); l++)
        {
            cout << " ";
        }
        // for printing of alphabets in below triangle pattern.
        int no_chars = 2 * (2 * n - line) - 1;
        for (int m = 0; m < no_chars; m++)
        {
            char below_char = char('A' + m);
            cout << below_char;
        }
        // after printong of one alpha . insert one new line.
        cout << endl;
    }
    return 0;
}