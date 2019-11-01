#include <iostream>
#include <string>
using namespace std;

template<class first, class second>
first Max(first a, second b)
{
    return (a>b?a:b);
}
int main()
{
    float x = 3.342342;
    int y = 34.34234;
    std::cout<<Max(x,y)<<std::endl;
}
