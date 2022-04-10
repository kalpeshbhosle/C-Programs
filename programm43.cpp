 //Write a language program to get the volume of a sphere with radius 6.
 #include<iostream>
using namespace std;
int main()
{
 float radius, area, circum; double PI=3.14;
		cout << "\n\n Find the area and circumference of any circle :\n";
		cout << "----------------------------------------------------\n";
        cout<<" Input the radius(1/2 of diameter) of a circle : ";
    	cin>>radius;

		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;

        cout << endl;
return 0;
}
