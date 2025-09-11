// Take 3 numbers input and tell if they can be the sides of a triangle.

#include<iostream>
using namespace std;

int main() {

  //Taking inputs
  float side1, side2, side3;
  cin >> side1 >> side2 >> side3;

  //Logic - Triangle Inequality Theorem
  if (side1 + side2 > side3 && side3 + side2 > side1 && side1 + side3 > side2 ) {
    cout << "The given inputs can be the sides of a triangle.";
  } else {
    cout << "The given inputs cannot be the sides of a triangle.";
  }

  return 0;
}