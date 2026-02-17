// Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;

int main() {

  //Taking input
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;

  //Logic for greatest number
  if (num1 > num2) {
    if (num1 > num3) {
      cout << "The greatest number is : " << num1;
    } else {
      cout << "The greatest number is : " << num3;
    }
  } else {
    if (num2 > num3) {
      cout << "The greatest number is : " << num2;
    } else {
      cout << "The greatest number is : " << num3;
    }
  }
  
  return 0;
}