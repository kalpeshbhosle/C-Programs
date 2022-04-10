#include <iostream>
using namespace std;
int a=10;//global variable declaration
void myfunction();
void Myfunction();
int main ()
{
    const double PI =3.14;
	const int a=20;//local variable declaration

	cout<< "print the value of a = "<<a<<endl;
	cout<< "print the value of a = "<<::a<<endl;
    cout << "these is the constant value of PI:"<<PI<<endl;

	myfunction();
    Myfunction();
	return 0;

}
void myfunction()
{
    cout<<"we are accessing the value from global variable ="<<a<<endl;
}
void Myfunction()
{
        cout << "these is the constant value :"<<PI;

}
