//C++ Program to Reverse a Number
#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {//23!=0
    remainder = n % 10;//23%10=3
    reversed_number = reversed_number * 10 + remainder;//0=0*10+3=3
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}
