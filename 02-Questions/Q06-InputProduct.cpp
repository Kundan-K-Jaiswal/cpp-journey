// Write a program to calculate product of three numbers

#include<iostream>
using namespace std;

int main() {
  int num1, num2, num3, product;
  cout << "Enter three numbers seperated by space to calculate their product : " << endl;
  cin >> num1 >> num2 >> num3;
  product = num1 * num2 * num3;
  cout << "The product of given numbers is : " << product;
  return 0;
  
}