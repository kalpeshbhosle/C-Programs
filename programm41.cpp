//Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
#include<iostream>
using namespace std;
int main()
{
 string firstname = "Alexandra" ; string lastname = "Abramov" ;
    string name = lastname +" "+firstname;
    cout<<"Name in reverse is : "<<name;
return 0;
}
