#include <iostream>

using namespace std;

void pasByValue(int val)
{
    val = 100;
}
void passByReference(int *val)
{
    *val=100;
}
int main()
{
    int x=20;
    int y=20;
    pasByValue(x);
    cout<<x<<endl;

    passByReference(&y);
    cout<<y<<endl;
    return 0;
}
