#include <iostream>
using namespace std;
class MyClass3
{
    private :
    int num;
public :
    MyClass3(int x)
    {
        num = x;
        cout <<"i am inside constructor :"<<num *num;
    }

};

int main()
{
    //object creation of myclass2
    MyClass3 myobj3(15);
return 0;
}
