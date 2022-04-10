#include <iostream>
using namespace std;

class classname
{
private :
    int num;
public :
    void setnum(int x){
    num = x;
    }
        int getnum(){
        return num;
    }

};
int main()
{   classname obj1();
    obj1.setnum(1000);
    cout << "your number is "<<obj1.getnum;

 return 0;
}
