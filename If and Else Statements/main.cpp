#include <iostream>

using namespace std;

int main()
{
    int age;
    int height;
    cout<<"please enter the age"<<endl;
    cin>>age;
    cout<<"please enter the height"<<endl;
    cin>>height;

    if(age>=20 && height>=100)
    {
        cout<<"great, you are old and tall enough"<<endl;
    }
    else
    {
        cout<<"too bad bro, you are too young and too short, sorry bud"<<endl;
    }
    return 0;
}
