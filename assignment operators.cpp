#include <iostream>
using namespace std;
    int main()
    {

        int x = 21;
        int y;

        y = x;
        cout <<"the value of(y = x) is :" <<y<<endl;

        y += x ;
        cout <<"the value of  (y+=x) is :" <<y<<endl;

        y -= x ;
        cout <<"the value of  (y -= x) is :" <<y<<endl;

        y *= x ;
        cout <<"the value of  (y *= x) is :" <<y<<endl;

        y /= x ;
        cout <<"the value of  (y /= x) is :" <<y<<endl;

        y |= x;
        cout <<"the value of  (y |= x) is :" <<y<<endl;


        y  >>= x;
        cout <<"the value of  (y <<= x) is :" <<y<<endl;

        y  >>= x;
        cout <<"the value of  (y >>= x) is :" <<y<<endl;

        y ^= x;
        cout <<"the value of  (y ^= x) is :" <<y<<endl;

        y=200;
        y %= x ;
        cout <<"the value of  (y %= x) is :" <<y<<endl;

        y &= x ;
        cout <<"the value of  (y &= x) is :" <<y<<endl;

return 0;


    }
