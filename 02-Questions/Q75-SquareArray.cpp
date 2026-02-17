// Given an integer n. Create an array containing squares of all natural 
// numbers till n and print the elements of the array.


#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int squareArr[n];

  for(int i=1; i<=n; i++) {
    squareArr[i-1] = i*i;
  }

  for(int i=0; i<n; i++ ) {
    cout << squareArr[i] << " " ;
  }

  return 0;
}