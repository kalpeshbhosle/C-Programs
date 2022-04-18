//3. Write a program to calculate the average height of all the students of a class.
//The number of students and their heights are entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int height;
    int height_sum = 0;
    float average;
    for(int i = 1; i<=10; i++)
    {
      cout << "Enter the height for " << i << " student : ";
      cin >> height;
      height_sum = height_sum + height;
    }
    average =  height_sum / 10.0;
    cout<<"Average height is : "<< average;

    return 0;
}
