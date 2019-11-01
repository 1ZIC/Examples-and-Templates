#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main()
{
    try{
    std::cout<<"please enter age"<<std::endl;
    int age = 0;
    std::cin>>age;
    if(age>100 || age<0)
    {

    }
    }
    catch(int e)
    {
        std::cout<<"Error No= "<<e<<std::endl;
    }
    catch(char e)
    {
        std::cout<<"error char= "<<e<<std::endl;
    }
    catch(...)
    {
        std::cout<<"unknown"<<std::endl;
    }
}
