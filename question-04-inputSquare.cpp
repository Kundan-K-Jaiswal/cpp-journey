// Write a program to calculate square of a given number

#include<iostream>
using namespace std;

int main() {
  int number, result;
  cout << "Enter a number to find it's square : ";
  cin >> number;
  result = number * number;
  cout << "The square of " << number << " is " << result;
  return 0;
}