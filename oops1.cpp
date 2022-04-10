#include <iostream>
using namespace std;
class myclass
{
    public :
    int x = 10;
    void myfuction()//method
    {
            cout << "we are trying to execute the class using object : " <<endl;

    }
    myclass()//constructor
    {
        cout << "we are using the constructor and trying to execute :"<<endl;
    }
};


int main()
{   myclass objectname;//object creation
    cout <<"hello world : "<<endl;
    objectname.myfuction();//calling to the object
    objectname.x ;
    cout << "value of x is :"<<objectname.x <<endl;// printing the value of x

    return 0;
}
