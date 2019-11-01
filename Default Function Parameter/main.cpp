#include <iostream>

using namespace std;
int sum(int firstNo = 20, int secondNo = 10);

int main()
{
    cout<<sum(134,234);
    return 0;
}

int sum(int firstNo, int secondNo)
{
    int result=0;
    result = firstNo+secondNo;
    return result;
}
