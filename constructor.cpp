#include <iostream>
using namespace std;

class kalpesh
{
public :
    kalpesh(string name)
    {
        cout << "my name is constructor "<<endl<<name;
    }
};
int main()
{
    kalpesh bhosale("radheshyam");
    return 0;
}
