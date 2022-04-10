#include <iostream>
#include <string>
using namespace std;

int main()
{
	string variables[2][4]={{"a","b","c","d"},{"e","f","h","g"}};

	int getarraylength = sizeof(variables) / sizeof(int);
 cout << getarraylength;


	return 0;
	}
