//compute the specified expressions and print the output.
#include <iostream>
using namespace std;
int main()
{
    float a=25.5,b=3.5,c=40.5,d=4.5;
    double result;
    cout << "Compute the specified expressions and print the output:";
    cout << "Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is ";
        result =  (a*b-b*b)/(c-d);

    cout <<"the result is :"<<result;
    return 0 ;
}
