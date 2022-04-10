//Write a program in C++ to calculate area of an equilateral triangle.
#include<iostream>
using namespace std;

int main()
{
   float s1;
 float area;
		cout << "\n\n Calculate the area of the Equilateral Triangle :\n";
		cout << " ----------------------------------------------------\n";

cout<<" Input the value of the side of the equilateral triangle: ";
 cin>>s1;
area = sqrt(3)/4*(s1*s1);
 cout<<" The area of equilateral triangle is: "<<area<<endl;
        cout << endl;
    return 0;
}
