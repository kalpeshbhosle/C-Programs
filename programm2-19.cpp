//C++ Program to Find ASCII Value of a Character
#include<iostream>
using namespace std;
class A
{
    char ch;
     public :
         void input(){
         cout <<"enter the number for ASCCI value : ";
         cin>>ch;



}
void output()
{
    cout <<"your ASCCI value for"<<" "<<ch <<" "<<"is"<<" = "<<(int)ch;
}
};
   int main()
   {
       A obj;
       obj.input();
       obj.output();

   }
