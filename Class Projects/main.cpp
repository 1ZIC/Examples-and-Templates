#include <iostream>
#include <string>
using namespace std;

template<class T>
class Math{
    T a,b;
public :
    Math(T x,T y){
    a=x;
    b=y;
    }
    T maxValue();
};
template<class T>
T Math<T>::maxValue(){
    return (a>b?a:b);
}

int main()
{
    Math<int> mat(45,65);
    cout<<mat.maxValue();
}
