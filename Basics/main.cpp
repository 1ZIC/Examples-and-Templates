#include <iostream>

using namespace std;

int main()
{
    int x, z;
    cout<<"please enter 1st number="<<endl;
    cin>>x;
    cout<<"Please enter 2nd number="<<endl;
    cin>>z;
    int sum=x+z;
    int substract=x-z;
    int product=x*z;
    float divide=x/z;
    int remainder=x%z;

    cout<<"the difference is= "<<substract<<endl;
    cout<<"the sum is= "<<sum<<endl;
    cout<<"the product is= "<<product<<endl;
    cout<<"the quotient is= "<<divide<<endl;
    cout<<"the remainder is= "<<remainder<<endl;
    return 0;
}
