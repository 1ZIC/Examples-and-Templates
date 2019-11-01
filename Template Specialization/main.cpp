#include <iostream>
#include <string>
using namespace std;

template<class T>
class charFinder{
public:
    charFinder(T a){
    cout<<a<<" is a not a valid char"<<endl;
    }

};

template<>
class charFinder<char>{
public:
    charFinder(char a){
    cout<<a<<" is a valid char"<<endl;
    }
};
int main()
{
    charFinder<char> cha1('a');
    charFinder<int> cha2(23);
    charFinder<float>cha3(23.33);
}
