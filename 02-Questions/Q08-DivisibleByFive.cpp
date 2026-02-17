// Write a program to check if the given number is divisible by 5 or not 

#include<iostream>
using namespace std;

int main() {
  int num;

  // input 
  cout << "Enter a number to check if it is divisible by 5 : ";
  cin >> num;

  //logic for divisibility by 5
  if (num % 5 == 0 ) {
    cout << "The Entered Number Is Divisible By 5.";
  } else {
    cout << "The Entered Number Is Not Divisible By 5.";
  }

  return 0;
}