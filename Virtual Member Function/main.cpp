#include <iostream>
#include <string>

using namespace std;

class shape
{
public:
    void setValues(int a, int b) {
    width = a;
    height = b;
    }
    virtual int area()=0;
    protected:
    int height;
    int width;
};
class rectangle : public shape
{
    public:

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
    shape *poly1=&rec;
    shape *poly2=&tri;
    poly1 -> setValues(10,20);
    poly2 -> setValues (10,20);
    std::cout<<rec.area()<<std::endl;
    std::cout<<tri.area()<<std::endl;
}
