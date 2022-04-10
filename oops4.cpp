#include <iostream>
using namespace std;
class MyClass4
{
private :
    int num;
public :
    //getter and setter method is called encapsulation
    void setNum(int x)
    {
        num = x;
    }
    int getNum()
    {
        return num;
    }

    int getnum()
    {
        return num;
    }
    void srtFirstname(string x);
        firstname = x;
    }
    string getFirstname()
    {
        return firstname();
    }

    }

};

int main()
{
    MyClass4 obj4;
    obj4.setNum(1000);
    obj4.setNum("RadheShyam");
    cout << "value of num :"<<obj4.getNum();
    cout << obj4.getFirstname();
return 0;
}
