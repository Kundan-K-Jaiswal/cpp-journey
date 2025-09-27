// Make a function which calculates 'a'raised to the power 'b' using recursion.

#include<iostream>
using namespace std;

int pow(int a, int b) {
  if ( b == 1 ) return a;
  return a * pow(a,b-1);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << pow (a,b);
  return 0;
}