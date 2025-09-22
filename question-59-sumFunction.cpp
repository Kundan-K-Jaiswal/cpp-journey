// WAP to find sum of two numbers using function

#include<iostream>
using namespace std;

int add(int a, int b) { // a,b -> formal parameters
  int sum = a + b;
  return sum;
}

int main () {
  int a, b, sum = 0;
  cin >> a >> b;
  sum = add(a,b); // a,b -> actual parameters  & pass by value
  cout << sum << endl;
  return 0;
}