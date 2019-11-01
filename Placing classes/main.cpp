#include <iostream>
#include <string>

using namespace std;
#include "books.h"

int main()
{
    Books book1;
    book1.setBookId(100);
    cout<<book1.getBookId()<<endl;
    return 0;
}
