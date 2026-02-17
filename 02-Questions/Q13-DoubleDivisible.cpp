// Take a positive integer input and tell if it is divisible by 5 and 3.

#include<iostream>
using namespace std;

int main() {
  int num;

  // Taking input 
  cout << "Enter a number : ";
  cin >> num;

  // Logic for solution
  if ( num % 5 == 0 && num % 3 == 0 ) {
    cout << "The given number is divisible by both 5 and 3";
  } else {
    cout << "The given number is not divisible by both 5 and 3";
  }

  return 0;
}