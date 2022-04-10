//Write a program in C++ to check overflow/underflow during various arithmetical operation.

#include <iostream>
using namespace std;

    int main()
    {
    cout << "\n\n  display the operation of pre and post increment and decrement :\n";

    cout << "--------------------------------------------------\n";

    int x=57;
    cout << "the number is :"<<x <<endl;

    x++;
    cout << "After post increment by 1 the number is :"<<x<<endl;

    ++x;
    cout << "After pre increment by 1 the number is :"<<x<<endl;

    x=x+1;
    cout << "After increasing by 1 the number is  :"<<x<<endl;

    x--;
    cout << "After post decrement by 1 the number is  :"<<x<<endl;

     --x;
    cout << "After pre decrement by 1 the number is :"<<x<<endl;

    x-1;
    cout << "After decreasing by 1 the number is  :"<<x<<endl;



    return 0;
    }




