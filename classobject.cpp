#include <iostream>
using namespace std;

    class myclass
    {
        // access specifier
    public :
        int x;

    private :
        int y;

    protected :
        int z;

    //syntax for method --returntype methodname(), no any return type{}
    public :
    void printdata()
    {
        cout << "\n we are inside the method";
    }
    };
int main()
{
    cout<< "hello world";
    myclass myobj;// creation of object automatic call to constructor

    myobj.printdata();

    myobj.x=10;
    cout << "\n value of x is :"<<myobj.x;

    //constructor is same as of classname();
    myclass ();
    {
        cout <<" \n we are inside the class";
    }

    return 0;
}
