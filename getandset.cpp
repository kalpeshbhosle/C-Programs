#include<iostream>
using namespace std;
class myclass
{
private :
    int num;

public :
   void setnum(int x){
   num=x;
   }
       getnum(){
       return num;
   }

    };

int main()
{
myclass myobject;
myobject.setnum(1000);
cout<<"your number is :"<<myobject.getnum();

return 0;
}
