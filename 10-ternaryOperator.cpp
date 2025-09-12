// (conditiion) ? if ture: if false;

//Solving even or odd using Ternary Operator

#include<iostream>
using namespace std;

int main() {
  
  //Taking input
  int num;
  cout << "Enter a number : ";
  cin >> num;

  //Using ternary operator
  (num % 2) == 0 ? cout << "Even" : cout << "Odd";

  return 0;
}