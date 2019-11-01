#include <iostream>
#include <cstring>
using namespace std;

struct Books
{
    char name[50];
    char author[50];
    int id;
};
void printBook(struct Books book)
{
   cout<<"Book 1 name: "<<book.name<<endl;
   cout<<"Book 1 author: "<<book.author<<endl;
   cout<<"Book 1 id: "<<book.id<<endl;
}
int main()
{
    struct Books Book1;
    strcpy(Book1.name,"It");
    strcpy(Book1.author, "Stephen King");
    Book1.id=1;

    printBook(Book1);
    return 0;
}
