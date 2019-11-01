#include <iostream>

using namespace std;

int main()
{
    int myArray[6]={2, 2, 2, 2, 2, 2};
    int sum = 0;

    for(int i=0; i<6; i++)
    {
        sum+=myArray[i];
    }

    cout<<"sum = "<<sum<<endl;
    return 0;
}
