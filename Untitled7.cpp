#include <iostream>
using namespace std;
class myclass{
    public:
int roleNumber;
string firstName;
string lastName;
long long phoneNumber;
string address;


};
int main(){
myclass info;
myclass firstName;
myclass lastName ;
myclass phoneNumber;
myclass address;

info.roleNumber=21;
info.firstName="kalpesh";
info.lastName="bhosale";
info.phoneNumber=4343434343;
info.address= "pune" ;

cout << "your role number is : ";
cout << info.roleNumber<<endl;

cout << "your firstName is : ";
cout << info.firstName<<endl;

cout << "your lastName is : ";
cout << info.lastName<<endl;

cout << "your phoneNumber is : ";
cout << info.phoneNumber<<endl;

cout << "your address is :" ;
cout << info.address<<endl;




return 0;
}
