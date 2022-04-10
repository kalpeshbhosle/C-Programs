#include <iostream>
using namespace std;

class classname
{
public :
    classname(string name)
    {
        cout << "we are inside the cunstructor : "<<endl<<name;
    }


    classname()
    {
        cout << "\nwe are always friends : "<<endl;
    }
};
int main()
{
    classname obj1("radheshyam");
    classname obj2;
 return 0;
}
