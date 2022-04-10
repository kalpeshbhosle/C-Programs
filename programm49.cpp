#include <iostream>
using namespace std;
int main()
{
    char character;
	cout << "\n\n Print code (ASCII code / Unicode code etc.) of a  given character:\n";
	cout << "-----------------------------------------------------------------------\n";
 	cout << " Input a character: ";
	    cin >> character;

  cout <<" The ASCII value of "<<character<<" is: " <<(int)character << endl;
  cout <<" The character for the ASCII value "<<(int)character <<" is: "<<(char)((int)character) << endl<< endl;
  return 0;
}
