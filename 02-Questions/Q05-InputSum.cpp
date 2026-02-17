// Write a program to calculate sum of given two numbers

#include<iostream>
using namespace std;

int main() {

  int num1, num2, sum;
  cout << "Enter any two number (seperated by space) to calculate their sum : ";
  cin >> num1 >> num2;
  sum = num1 + num2;
  cout << "The sum of " << num1 << " & " << num2 << " is : " << sum; 
  return 0;
  
}