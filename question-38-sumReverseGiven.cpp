// Write a program to print the sum of given number and its reverse.

#include<iostream>
using namespace std;

int main () {
  int num, last_digit, new_num=0, sum;
  cin >> num;
  sum = num;

  while (num != 0) {
    last_digit = num % 10;
    num = num / 10;
    new_num = new_num * 10 + last_digit;
  }

  sum = sum + new_num;
  cout << "The sum of given number and its reverse is " << sum;
  return 0;
}