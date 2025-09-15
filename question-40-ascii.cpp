/*
Write a program to print all the Ascii values and their equivalent characters 
of 26 alplabets using a while loop.
*/

#include<iostream>
using namespace std;

int main () {
  int ascii_value;
  char alphabet = 'a';
  
  while ( alphabet != 'z' ) {
    ascii_value = alphabet;
    cout << alphabet << " " << ascii_value << endl;
    alphabet += 1;
  }
  cout << alphabet << " " << ascii_value << endl;

  return 0;
}