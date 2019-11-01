#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout<<"please enter the grade"<<endl;
    cin>>grade;

    switch(grade)
    {
        case 'a' :
        case 'A' : cout<<"exellent"<<endl;
        break;
        case 'b' :
        case 'B' : cout<<"very good"<<endl;
        break;
        case 'c' :
        case 'C' : cout<<"you passed"<<endl;
        break;
        default:
            cout<<"invalid entry"<<endl;
        break;
    }
    return 0;
}
