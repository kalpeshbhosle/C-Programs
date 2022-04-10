#include <iostream>
using namespace std;


    class mydetails
    {

    private :
        string myname = "testing class";

    public :
        void setmethod(string k)
    {
        myname = k;
    }

        string getmethod()
    {
        return myname;

    }



 };

 class sallary
 {

    private :
        int sallary = 25000;

    public :
        void setmethod(int a){
        sallary = a;
    }

    int getmethod(){
        return sallary;
    }
 };


int main()
{
    sallary sallaryobj;
    sallaryobj.getmethod();
    mydetails mynameobj;
    mynameobj.getmethod();
    cout << "\nyour name is : "<<mynameobj.getmethod();
    cout<<"\n*********************************\n";
    cout<< "your current sallary is  : "<<sallaryobj.getmethod();


return 0;
}
