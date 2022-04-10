// kilometers per hour to miles per hour
#include<iostream>
using namespace std;
int main()
{
    int kmph;
    double mph;
    cout << "calculating the kilometers per hour to miles per hour "<<endl;
    cout <<"********************************************"<<endl;
    cout <<"Input the distance in kilometer : "<<endl;
    cin>>kmph;
    mph=kmph*0.6213712;
    cout <<mph;
    return 0;
}
