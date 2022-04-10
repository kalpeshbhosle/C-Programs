#include <iostream>
using namespace std;
class MyClass2
{
public :
    //parameterized constructor
    MyClass2(string name)
    {
        cout <<"i am inside the constructor and my name is :"<<name;
    }
    // constructor overloading
    //no parameterized constructor or default constructor
    MyClass2()
    {
        cout <<"\n i am inside the class!!";
    }
};
int main()
{
    //object creation of myclass2
    MyClass2 myobj1("tom");
    MyClass2 myobj2;
return 0;
}
