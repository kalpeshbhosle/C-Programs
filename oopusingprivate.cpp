#include <iostream>
using namespace std;

class classname
{
private :
    int num;
public :
    classname(int x)
    {
        num = x;
        cout << "this is the output for your input : "<<endl<<num*num;
    }


};
int main()
{
    classname obj1(10);

 return 0;
}
