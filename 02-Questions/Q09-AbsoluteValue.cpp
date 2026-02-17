/* Write a program to print the absolute value of the given number 
  ( if the number is negative make it a positive number ) */

#include<iostream>
using namespace std;

int main(){
  int num;

  // Taking input
  cout << "Enter a number :";
  cin >> num;

  // logic for absolute value
  if ( num >= 0 ) {
    cout << num;
  } else {
    cout << -num;
  }
  
  return 0;
}