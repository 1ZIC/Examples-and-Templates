#include <iostream>

using namespace std;
class Books{
public:
    int Id=256;
    void printBookId()
    {
        cout<<"The book Id is= "<<Id<<endl;
    }
};
int main()
{
    Books book1;
    book1.printBookId();
    return 0;
}
