// Find the sum of all the elements in a given matrix.

#include<iostream>
using namespace std;
int main() {

  int arr[8][3]={11,2,56,65,20,35,95,21,68,5,41,13,52,6,5,32,2,6,31,56,23,13,2,31};

  int sum = 0;

  for (int i=0; i<8; i++ ) {
    for (int j=0; j<3; j++) {
      sum += arr[i][j];
    }
  }

  cout << sum;

  return 0;

}