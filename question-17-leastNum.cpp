// Take 3 positive integers input and print the least of them.

#include<iostream>
using namespace std;

int main() {

  //Taking input
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;

  //Logic for least number
  if ( num1 < num2 && num1 < num3 ) {
    cout << "The least number is : " << num1;
  } else if ( num2 < num3 && num2 < num1) {
    cout << "The least number is : " << num2;
  } else {
    cout << "The least number is : " << num3;
  }
  
  return 0;
}