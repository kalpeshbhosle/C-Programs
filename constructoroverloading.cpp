#include <iostream>
using namespace std;

class classname
{
public :
    //constructor overloading when we create more than one class
    classname(string name)
    {
        cout << "we are inside the cunstructor : "<<endl<<name;
    }


    classname()
    {
        cout << "\nwe are always friends : "<<endl;
    }

     classname(long long number)
    {
        cout << "and this is my number  : "<<endl<<number;
    }
};
int main()
{
    classname obj1("radheshyam");
    classname obj2;
    classname obj3(9898989898);
 return 0;
}
