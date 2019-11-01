#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /* ofstream file_;
    file_.open("mytext.txt");
    if(file_.is_open()){
    file_ <<"this is my first file 1 \n";
    file_ <<"this is my first file 2 \n";
    file_ <<"this is my first file 3 \n";
    file_ <<"this is my first file 4 \n";
    fuke_.close();
    }*/

    ifstream file_("mytext.txt");
    int id;
    std::string name;
    int age;
    if(file_.is_open())
    {
        while(file_ >> id >> name >>age)
        {
            std::cout<< id <<" "<<name<<age<<'\n';
        }
        file_.close();

    }
    else
        std::cout<<"file is not open"<<'\n';
    std::cin.get();
    return 0;
}
