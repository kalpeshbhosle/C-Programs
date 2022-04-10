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
//variable = (condition ) ? truevalue : falsevalue;
string output= (x<y) ? (y>z) ? "y is greatest number" : "z is greatest number" : "x is greatest number" ;
cout <<"unable to find greatest number :";
}
cout<<output;
return 0;
}
