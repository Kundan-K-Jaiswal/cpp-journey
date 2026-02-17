/*
Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is 
greater than its perimeter.
*/

#include<iostream>
using namespace std;

int main() {
  float len, bre, area, peri;

  // Taking input from the users
  cout << "Enter the length of the rectangle : ";
  cin >> len;
  cout << "Enter the breadth of the rectangle : ";
  cin >> bre;

  // calculating area 
  area = len * bre;

  // calculating perimeter
  peri = 2 * ( len + bre );

  // comparing area and perimeter 
  if ( area > peri ) {
    cout << "Area of the given rectangle is greater than the perimeter.";
  } else {
    cout << "Perimeter of the given rectangle is greater than the area.";
  }

  return 0;
}