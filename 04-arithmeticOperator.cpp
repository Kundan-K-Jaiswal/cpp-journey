#include<iostream>
using namespace std;
int main() {
  int num1, num2; //declaration
  num1 = 5; //initialization
  num2 = 6; //initialization

  cout << num1 + num2 << endl; // addition operator - sum
  cout << num1 - num2 << endl; // subctraction operator - difference
  cout << num1 * num2 << endl; // multiplication operator - multiply
  cout << num1 / num2 << endl; // division operator - gives quotient as output
  cout << num1 % num2 << endl; // modulo operator - gives remainder as output

  // note : [ a % (-b) = a % b ] but [ (-a) % b = -(a % b)]


  // Increment & Decrement Operator 
  num1++; // post increment operator - first use then increase
  cout << num1 << endl;
  num1--; // post decrement operator - first use then decrease
  cout << num1 << endl;
  ++num1; // pre increment operator - first increase then use
  cout << num1 << endl;
  --num1; // pre derement operator - first decrease then use
  cout << num1;
}