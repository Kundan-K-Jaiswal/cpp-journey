#include<iostream>
using namespace std;
int main() {
  int x;
  char ch;
  bool b;
  float fl;
  long long l;
  int arr[5];
  cout << "Size of int : " << sizeof(x) << endl;
  cout << "Size of char : " << sizeof(ch) << endl;
  cout << "Size of bool : " << sizeof(b) << endl;
  cout << "Size of float : " << sizeof(fl) << endl;
  cout << "Size of long long : " << sizeof(l) << endl;
  cout << "Size of int array of length 5 : " << sizeof(arr) << endl;
  return 0;
}