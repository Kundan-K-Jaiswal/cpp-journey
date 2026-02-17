#include<iostream>
using namespace std;

int c = 12; // this is a global variable. It can be accessed form anywhere

int main () {
  int a, b;
  a = 5;
  b = 3;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  return 0;
}