/*

Take input percentage of a student & print the Grade according to marks :

1. 81-100 Very Good
2. 61-80 Good
3. 41-60 Average
4. <=40 Fail 

*/

#include<iostream>
using namespace std;

int main() {

  //Taking input
  int marks;
  cout << "Enter Your Marks In Percentage (1 - 100): ";
  cin >> marks;

  //Logic - else if 
  if ( marks >= 81 && marks <= 100 ) {
    cout << "Very Good";
  } else if ( marks >= 61 && marks <= 80 ) {
    cout << "Good";
  } else if ( marks >= 41 && marks <= 60 ) {
    cout << "Average";
  } else if ( marks <= 40 && marks >= 0 ) {
    cout << "Fail";
  } else {
    cout << "Invalid Percentage";
  }

  return 0;
}