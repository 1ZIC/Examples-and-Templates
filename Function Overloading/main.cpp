#include <iostream>

using namespace std;

void sum(int firstNo, int secondNo)
{
    cout<<"sum of integers is= "<<firstNo+secondNo<<endl;
}

void sum(float firstNo, float secondNo)
{
    cout<<"the sum of float is = "<<firstNo+secondNo<<endl;
}
int main()
{
    float a=265.75, b=675.76;
    sum(a, b);
    int x = 465, y=465;
    sum(x,y);
    return 0;
}
