// WAP to print reverse of a given number.

#include<iostream>
using namespace std;

int main () {
  int num, last_digit, new_num=0;
  cin >> num;

  while (num != 0) {
    last_digit = num % 10;
    num = num / 10;
    new_num = new_num * 10 + last_digit;
  }

  cout << new_num;
  return 0;
}