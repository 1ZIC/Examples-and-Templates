#include <iostream>
#include <cstring>
using namespace std;

struct Books
{
    char name[50];
    char author[50];
    int id;
};
int main()
{
    struct Books book1;

    strcpy(book1.name, "It");
    strcpy(book1.author, "Stephen King");
    book1.id=1;

    cout<<"Book 1 name: "<<book1.name<<endl;
    cout<<"book 1 author: "<<book1.author<<endl;
    cout<<"Book 1 id: "<<book1.id<<endl;
    return 0;
}
