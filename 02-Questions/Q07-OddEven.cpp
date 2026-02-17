// Write a program to check if the given number is odd or even 

#include<iostream>
using namespace std;

int main() {

  int number;
  
  cout << "Enter a number to check if it is odd or even :";
  cin >> number;

  if (number % 2 == 0) {
    cout << "The given number is even.";
  } else {
    cout << "The given number is odd.";
  }
  
  return 0;
}