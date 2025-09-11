// Take a postitive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include<iostream>
using namespace std;

int main() {

  //Taking input 
  int num;
  cin >> num;

  //Logic
  if ( (num % 5 == 0 || num % 3 == 0) && (num % 15 != 0)) {
    cout << "The number that you entered is divisible by 5 or 3 but not divisible by 15.";
  } else {
    cout << "The number doesnot satisfy the condition.";
  }

  return 0;
}