//C++ Program to Find Factorial

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;

    cout <<"find out the leap year :"<<endl;
    cin>>year;
    if (year % 400 == 0)
        {
        cout <<year<<"is a leap year"<<endl;
        }
       else if (year % 100 == 0)
        {
        cout <<year<<"is not a leap year"<<endl;
        }
       else if (year % 4 == 0)
        {
        cout <<year<<"is a leap year"<<endl;
        }
        else
            {
        cout <<year<<"the year is not leap year";
            }


    return 0;
}
