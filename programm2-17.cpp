//Increment ++ and Decrement -- Operator Overloading in C++ Programming
#include<iostream>
using namespace std;
int main()
{
    int x;int i;
    cout <<"Increment ++ and Decrement --"<<endl;
    cout <<"enter the number for perform the operation = ";
    cin>>x;
    cout<<x<<endl;
    ++x;
    cout<<"after ++ increment = "<<x<<endl;
    --x;
    cout<<"after -- decrement = "<<x<<endl;

    return 0;
}

