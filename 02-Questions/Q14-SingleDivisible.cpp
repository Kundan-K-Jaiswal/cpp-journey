// Take postivie integer input and tell if it is divisible by 5 or 3

#include<iostream>
using namespace std;

int main() {
  int num;

  // Taking input 
  cout << "Enter a number : ";
  cin >> num;

  // Logic for solution
  if ( num % 5 == 0 || num % 3 == 0 ) {
    cout << "The given number is either divisible by 5 or by 3, or by both.";
  } else {
    cout << "The given number is neither divisible by 5 nor by 3.";
  }

  return 0;
}