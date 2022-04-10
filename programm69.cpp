//Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters.
#include <iostream>
using namespace std;

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    cout << text << endl;
    return 0;
}
