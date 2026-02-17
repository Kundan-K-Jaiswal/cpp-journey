// Take positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;

int main() {
  int num, num1, result = 0;

  //Taking input from user
  cout << "Enter a number : ";
  cin >> num1;

  // My Logic
  cout << "Output form my approach" << endl;
  num = num1;
  if (num / 10 > 0 ) {
    num /= 10;
    if (num / 10 > 0) {
      num /= 10;
      if (num / 10 == 0 ) {
        result = 1;
      }
    }
  }

  if ( result ) {
    cout << "Given input is a three digit number."<< endl<< endl;
  } else {
    cout << "Given input is not a three digit number."<< endl<< endl;
  }



  // Teacher's Logic
  cout << "Output form teacher's approach" << endl;
  if ( num1 > 99 && num1 < 1000) {
    cout << "Given input is a three digit number.";
  } else {
    cout << "Given input is not a three digit number.";
  }
  
  return 0;
}