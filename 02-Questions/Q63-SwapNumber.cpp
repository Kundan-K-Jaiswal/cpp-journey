// Write a program to swap 2 numbers

#include<iostream>
using namespace std;
int main() {

  int a, b, c;
  cin >> a >> b;

  // Method 1
  c = b;
  b = a;
  a = c;

  // Method 2
  b = a + b;
  a = b - a;
  b = b - a;

  // Method 3
  // xor = if both digits are same it gives 0 else it gives 1
  // x ^ x = 0
  // x ^ 0 = a
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  cout << a << " " << b;

  return 0;
}