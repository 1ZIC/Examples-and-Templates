#include <iostream>
#include <string>
using namespace std;

template<class dataType>
dataType add(dataType a, dataType b)
{
    return a+b;
}

int main()
{
    double x = 36.5743;
    double y = 46.3452;
    std::cout<<add(x,y)<<std::endl;
}
