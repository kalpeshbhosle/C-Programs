//C++ Program to Multiply two Numbers
#include<iostream>
using namespace std;
class A
{
    int x,y,z;
     public :
         void input(){
         cout <<"enter the 2 number : ";
         cin>>x>>y;



}
void output()
{  z=x*y;
    cout <<"your multiplication request for 2 number is : "<<" "<<z;
}
};
   int main()
   {
       A obj;
       obj.input();
       obj.output();

   }
