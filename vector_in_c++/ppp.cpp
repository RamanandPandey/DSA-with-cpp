#include <iostream>
using namespace std;
int c;
struct circle
{
    int r;
    int n;
};
int cal(struct circle r2)
{
    c = r2.r * r2.n;
    return c;
}
int main()
{
    struct circle r1
    {
        12, 5
    };
 cal(r1);
        cout << c;
    return 0;
}