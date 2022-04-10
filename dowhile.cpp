//C++ Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;
int main ()
{
    int n; int i=1;
    cout<<" enter your number : ";
    cin>>n;
    do
    {
        cout <<n<<"*"<<i<<"="<<n*i<<endl;
        i++;

    }
    while(i<=10);

return 0;
}
