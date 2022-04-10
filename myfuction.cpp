#include <iostream>
using namespace std;
int myfunction(int,int);
int main()
{   int a;int b;
    cout <<"enter you numbers to find biggest :"<<endl;
    cout <<"\n first number is :";
    cin >>a;
    cout<<"enter your second number :";
    cin>>b;
    int c= myfunction(a,b);
    cout <<"your biggest number is :"<<c;
    }



    int myfunction(int x ,int y)
{

    if (x>y)
    return x;
    else
        return y;




}
