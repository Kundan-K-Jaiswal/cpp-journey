#include<iostream>
using namespace std;

int main() {
  int a = 5, b = 6;

  // if true gives 1 else gives 0

  // note : = is an assignment operator where as == is a comparison operator

  cout << (a == b) << endl;  // checks if the given values are equal
  cout << (a != b) << endl; // checks if the given values are unequal
  cout << (a < b) << endl; // checks if a is less than b
  cout << (a > b) << endl; // checks if a is greater than b
  cout << (a <= b) << endl; // checks if a is less than or equal to b
  cout << (a >= b); // checks if a is greater than or equal to b

  return 0;

}