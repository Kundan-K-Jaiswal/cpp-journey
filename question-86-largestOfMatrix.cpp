// Find the maximum element in a given matrix.

#include<iostream>
using namespace std;
int main() {

  int arr[8][3]={11,2,56,65,20,35,95,21,68,5,41,13,52,6,5,32,2,6,31,56,23,13,2,32};

  int max = INT32_MIN;

  for (int i=0; i<8; i++ ) {
    for (int j=0; j<3; j++) {
      if (arr[i][j] > max) max = arr[i][j];
    }
  }

  cout << max;

  return 0;

}