#include <iostream>

using namespace std;

int sum(int firstNo ,int secondNo)
{
    int result=0;
    result=firstNo+secondNo;
    return result;
}
int main()
{
    int multiply=2;
    int mainResult;
    mainResult=multiply*sum(253,456);
    cout<<"the main result is "<<mainResult<<endl;

    return 0;
}
