
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file_;
    file_.open("mytext.txt");
    if(file_.is_open()){
    file_ <<"this is my first file 1 \n";
    file_ <<"this is my first file 2 \n";
    file_ <<"this is my first file 3 \n";
    file_ <<"this is my first file 4 \n";
    fuke_.close();
    }

    std::cin.get();
    return 0;
}
