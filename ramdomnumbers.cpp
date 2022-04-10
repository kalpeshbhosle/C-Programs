//Write a program in C++ to check overflow/underflow during various arithmetical operation.

#include <iostream>
using namespace std;

    int main()
    {
    cout << "\n\n  overflow/underflow during various arithmetical operation :\n";

    cout << "--------------------------------------------------\n";
    cout << "Range of int is [-2147483648, 2147483647] :"<<endl;
    int x=2147483647;
    int y = -2147483648;

    cout << "Overflow the integer range and set in minimum range : " << x + 1 <<endl;
    cout << "Increasing from its minimum range :"<< x + 2<<endl;
    cout << "product is :"<< x * x<< endl;

    cout << "Underflow the range and set in maximum range :"<<y - 1<<endl;
    cout << "Decreasing from its maximum range :"<<y - 2 <<endl;
    cout << "product is :"<< y * y << endl;

    return 0;
    }




