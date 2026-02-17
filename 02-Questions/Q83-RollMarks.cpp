/* Write a program to store roll number and marks obtained by 4 students side by side in a matrix. 
eg: 037 99 98 96
    109 100 99 98
    120 80 85 90
    126 86 89 63
*/



#include<iostream>
using namespace std;

int main() {

  int arr[4][4];

  for ( int i = 0; i<4; i++ ) {
    cout << "Enter Student " << i+1 << " Details : ";
    for (int j = 0; j<4; j++ ) {
      cin >> arr[i][j];
    }
  }

  for ( int i = 0; i<4; i++ ) {
    for (int j = 0; j<4; j++ ) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}