#include<iostream>
using namespace std; // used so that we dont have to write std:: infornt of cout and cin.
int main() {
  int integer = 5; // used to store integers
  float decimalNumber = 5.001; // used to store decimal numbers
  double preciseDecimalNumber = 5.666666666666986532; // used to store decimal numbers with precision
  char character = 'k'; // used to store characters
  bool state = true; // used to store either ture or false
  cout << integer << " " << decimalNumber << " " << character << " " << state << " " << preciseDecimalNumber;
}