// Write a program to add two matrices

#include<iostream>
using namespace std;

int main() {
  int arr1[][3] = {4,5,2,3,6,9,5,4,9};
  int arr2[][3] = {8,9,5,5,3,6,5,1,2};
  int sum[3][3];

  for (int i=0; i<3; i++ ) {
    for (int j=0; j<3; j++ ) {
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }
  }

  for (int i=0; i<3; i++ ) {
    for (int j=0; j<3; j++ ) {
      cout<< sum[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}