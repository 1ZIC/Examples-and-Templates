#include <iostream>
#include <string>
using namespace std;

class Books{
public:
    Books()
    {
        cout<<"we are in constructor"<<endl;
    }
    ~Books()
    {
        cout<<"we are in destructor"<<endl;
    }
};
int main()
{
    Books book1;
    cout<<"we are in 1"<<endl;
    cout<<"we are in 2"<<endl;
    cout<<"we are in 3"<<endl;

    return 0;
}
