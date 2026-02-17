/*
Write a program to create a calculator that performs basic arithmetic operations 
(add, subtract, multiply and divide) using switch case. The calculator should input 
two numbers and an operator from user.
*/

#include<iostream>
using namespace std;

int main() {
  float num1, num2, result = 0;
  char op;

  cout << "Enter Two numbers to perform an operation : ";
  cin >> num1 >> num2;

  cout << "Enter a operator ( +, -, *, /) : ";
  cin >> op;

  switch(op) {
    case '+':
      result = num1 + num2;
      break;
    
    case '-':
      result = num1 - num2;
      break;

    case '*':
      result = num1 * num2;
      break;

    case '/':
      result = num1 / num2;
      break;

    default:
      cout << "Invalid Operator.";
  }

  if (result != 0) cout << "The output of the operation is " << result;


  return 0;
}