//Write a program calculate the volume of a sphere.
#include<iostream>
using namespace std;
int main()
{
    int radius = 6;
    float volumeofsphere = 904.32;

    cout << "calculating the volume of the sphere "<<endl;
    cout <<"********************************************"<<endl;
    cout <<"The volume of a sphere is : "<<endl;
    int calculation=(4*3.14*radius*radius*radius)/3;
    cout << calculation;
    return 0;
}
