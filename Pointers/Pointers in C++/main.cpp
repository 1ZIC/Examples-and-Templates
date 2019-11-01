#include <iostream>

using namespace std;

int main()
{
    int var=100;
    cout<<&var<<endl;

    int *intP;
    intP=&var;

    cout<<intP<<endl;
    cout<<*intP<<endl;
    var=20;
    cout<<intP<<endl;
    cout<<*intP<<endl;
    return 0;
}
