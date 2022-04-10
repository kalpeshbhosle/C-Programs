#include <iostream>
using namespace std;
int myfunction(int x, int b);
int main()
{
int a,b;
cout << "enter the two numbers to find the greatest :"<<endl;
cout << "enter the two numbers :";
cin>> a>>b;
int c=myfunction(a,b);
cout << "the biggest number is :"<<endl;
cout <<c;

return 0;

}
int myfunction(int x,int y)
{
if (x>y)
return x;
else
return y;
}
