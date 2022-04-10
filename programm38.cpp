//multiplication table of a number upto 10

#include <iostream>
using namespace std;
int main()
{

    int x,y;
    cout << "the table upto the 10 "<<endl;
    cin>>y;
    for (x=1; x<=10;x++){
    cout<<y<<"*"<<x<<endl;
    cout<<y*x;
    }
        return 0;

}
