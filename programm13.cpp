//C++ Program to Display Fibonacci number Series.

#include <iostream>
using namespace std;

    int main()
    {
    cout << "\n\n Fibonacci number Series : :\n";

    cout << "--------------------------------------------------\n";

    int number; t1=0; t2=1; int nextterm;
    cout << "enter the limit of term :";
    cin >> number;

    for (int i=0; i<=number;i++){
    cout << t1<<" ";
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    }





        return 0;
    }




