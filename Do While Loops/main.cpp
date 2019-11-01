#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int number=0;
    int sum=0;1;

    do
    {
        cout<<"input any value"<<endl;
        cin>>number;
        sum=sum+number;

        x++;
    }while(x<1);
    cout<<"the sum is "<<sum<<endl;
    return 0;
}
