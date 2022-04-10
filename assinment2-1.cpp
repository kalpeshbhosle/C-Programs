//C++ Program to Find Quotien and Remainder
#include <iostream>
using namespace std;
int main()
{
    int divident,divisor,Quotient,Remainder;
    cout <<"Find Quotient and Remainder"<<endl;
    cout <<"\nenter the divisor :";
    cin  >>divident;

    cout <<"\n enter the divident:";
    cin  >>divisor;
    Quotient=divident / divisor;
    Remainder =divident % divisor;

    cout <<" Quotien is :"<<Quotient;

    cout <<" Remainder is :"<<Remainder;

 return 0;
}
