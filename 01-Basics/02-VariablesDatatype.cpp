#include<iostream>
using namespace std;                                      // used so that we dont have to write std:: infornt of cout and cin.
int main() {
  int integer = 5;                                      // used to store integers
  float decimalNumber = 5.001f;                        // used to store decimal numbers
  double preciseDecimalNumber = 5.66698329;           // used to store decimal numbers with precision ( precision of cout is only 5 characters after ".")
  char character = 'k';                              // used to store characters ( is stored in ASCII Value )
  bool isState = true;                              // used to store either ture or false
  cout << integer << " " << decimalNumber << " " << character << " " << isState << " " << preciseDecimalNumber;
  return 0;
}