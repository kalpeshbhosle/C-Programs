#include <iostream>
#include <string>
using namespace std;
int main()
{
	string value[6]={"a","b","c","d"};

	for (int i=0 ; i<4; i++){
	cout << value[i]<<endl;
}
cout << value[0]<<endl;
cout << value[1]<<endl;
cout << value[2]<<endl;
cout << value[3]<<endl;
cout << sizeof(value);
value[4]="e";

return 0;
}
