#include <iostream>
#include <string>
using namespace std;


class shape
{
public:
    void setValues(int a,int b){
    width=a;
    height=b;
    }
    protected:
    int height;
    int width;
};
class rectangle : public shape
{
    public:
        int area(){
            return (height * width);
        }
};
class triangle : public shape
{
    public:
        int area(){
            return (height * width/2);
        }
};

int main()
{
    rectangle rec;
    triangle tri;
    rec.setValues(15,10);
    tri.setValues(15,10);
    std::cout<<"area Rectangle= "<<rec.area()<<std::endl;
    std::cout<<"area Triangle= "<<tri.area()<<std::endl;
    return 0;
}
