#include <iostream>
using namespace std;
int main()
{
int t1,t2;

cout << "enter the two numbers :";
cin >>t1>>t2;
cout << "before swapping the first number is :"<<t1<<endl;
cout << "before swapping the second number is:"<<t2<<endl;
t1=t1 + t2;//10+20=30
t2=t1 - t2;//30-20=10
t1=t1 - t2;//30-10=20
cout <<"**********************************************"<<endl;
cout << "after swapping the first number is :"<<t1<<endl;
cout << "after swapping the second number is:"<<t2<<endl;
return 0;
}
