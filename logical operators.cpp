#include <iostream>
using namespace std;

int main() {
  int x ;
  int y ;
        cout <<"enter your first no:"<<endl;
        cin >> x;

        cout <<"enter your second no:"<<endl;
        cin >> y;

        cout << (x > y && x < y )<<endl;
        cout << (x < y || x < y)<<endl;
        cout << !(x < y && x < y);
  return 0;
}
