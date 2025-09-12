/* 

Given a point (x,y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 
3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin, viz. (0,0).

*/

#include<iostream>
using namespace std;

int main() {

  //Taking coordinates as input
  int x, y;
  cout << "Enter X-Coordinate : ";
  cin >> x;
  cout << "Enter Y-Coordinate : ";
  cin >> y;

  //Logic
  if ( x == 0 ) {
    // x = 0
    if ( y == 0) {
      // x = 0, y = 0
      cout << "At the Origin";
    } else {
      // x = 0, y != 0
      cout << "On the Y-axis";
    }
  } else if ( y == 0 ) {
    // x != 0, y = 0
    cout << "On the X-axis";
  } else {
    // x != 0, y != 0
    if ( (x > 0) && (y > 0) ) {
      // x = +ve, y = +ve 
      cout << "1st Quadrant";
    } else if ((x < 0) && (y > 0)) {
      // x = -ve, y = +ve 
      cout << "2nd Quadrant";
    } else if ((x < 0) && (y < 0)) {
      // x = -ve, y = -ve 
      cout << "3rd Quadrant";
    } else {
      // x = +ve, y = -ve 
      cout << "4th Quadrant";
    }
  }
  
  return 0;
}