#include<iostream>
using namespace std;

int main() {
  int a;
  int* p = &a;  // pointer
  cout << p << endl;
  cout << &a << endl; // address
  cout << &p << endl;
  cout << a << endl;
  cout << *p << endl;  // Dereference

  *p = 109;
  
  cout << a;
  return 0;
}