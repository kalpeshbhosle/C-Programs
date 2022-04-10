//C++ Program to Check Whether a Number is Palindrome or Not
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
        int c,s,r,n;
        public :
        void input()
   {
        cout<<"enter the number :";
        cin>> n;
   }


    void output()
    {
        c=n;
        s=0;
        while (n>0)
        {
            r=n%10;
            s=(s*10)+r;
            n=n/10;
        }
    if (c==s)
    cout<<"it is a palindrome number"<<endl;
    else
        cout<<"it is not a palindrome number ";
    }
    };



int main()
   {
       A obj;
       obj.input();
       obj.output();
   }
