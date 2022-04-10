#include <iostream>
using namespace std;
    int main()
    {
      string MyName,address;
      int age;
      char gender;
      long long PhoneNumber;
            cout<<"enter your name:";
            getline(cin , MyName);

            cout<<"enter your age:";
            cin>>age;

            cout<<"enter your address :";
            cin>>address;

            cout<<"enter your gender :";
            cin>>gender;

            cout<<"enter your phnone no: ";
            cin>>PhoneNumber;

            cout<<"your name is:"<<MyName<<endl;
            cout<<"your age is:"<<age<<endl;
            cout<<"your address is:"<<address<<endl;
            cout<<"your gender is:"<<gender<<endl;
            cout<<"your phone no is:"<<PhoneNumber<<endl;
        return 0;

    }
