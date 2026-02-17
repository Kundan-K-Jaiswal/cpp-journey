// WAP to print sum of digits of a given number.

#include<iostream>
using namespace std;

int main() {
  
  int num, last_digit, sum = 0;
  cin >> num;

  while (num != 0) {
    last_digit = num % 10;
    num = num / 10;
    sum += last_digit;
  }

  cout << "The sum of digits of given number is " << sum;

  return 0;
}