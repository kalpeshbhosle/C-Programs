//Write a program in C++ to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
float p,r,t,ci;
cout<<"Enter Principle, Rate and Time:\n";
cin>>p>>r>>t;
ci=p*pow((1+r/100),t);
cout<<"\nCompound Interest = "<<ci;

return 0;
}
