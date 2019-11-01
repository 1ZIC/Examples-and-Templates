#include <iostream>

using namespace std;

void sum(int firstNo , int secondNo)
{
    cout<<"the sum of the given numbers is "<<(firstNo+secondNo)<<endl;
}

int main()
{
    int a,b;
    cout<<"please enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    sum(a,b);

    int x,y;
    cout<<"please enter two numbers"<<endl;
    cin>>x;
    cin>>b;
    sum(a,b);
    return 0;
}
