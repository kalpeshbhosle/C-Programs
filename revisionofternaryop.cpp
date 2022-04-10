#include <iostream>
using namespace std;

    int main()
    {
    int x,y,z;
    cout<<"find the greatest number :"<<endl;

    cout <<"enter the value of x :";
    cin>>x;

    cout <<"enter the value of y:";
    cin>>y;

    cout <<"enter the value of z:";
    cin>>z;

    string output = (x > y) ? (y > z) ? (z > x)? "x is greater number" : "z is greater number" : "y is greater number";

    cout << output;
    return 0;
    }
