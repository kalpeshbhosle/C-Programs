#include <iostream>
using namespace std;

int main()
{
int x, y, z;
cout<< "enter the value of x :";
cin >>x;

cout<< "enter the value of y:";
cin>>y;

cout<<"enter the value of z:";
cin>>z;
cout <<"greatest number from x , y , z is: "<<endl;
if (x<y) {

        if(y>z)

        {
        cout <<"y is greatest number :"<<endl;
        }
    else{
        cout <<"z is greatest number :"<<endl;
        }
    }else{
        cout <<"x is greatest number :"<<endl;
        }

return 0;
}
