// Given an array of integers, change the value of all odd indexed elements
// to its second multiple and increment all even indexed value by 10.

#include<iostream>
using namespace std;
int main() {
  int arr[] = {1,56,6,54,6,31,56,52,85,2,65,2,6,26,6,85,65,32,65,3,23,2,6,51};

  int arrSize = sizeof(arr)/4;

  for(int i=0; i<arrSize; i++ ) {
    cout << arr[i] << " ";
  }
  cout << endl;

  for(int i=0; i<arrSize; i++ ) {
    if (i%2 == 0 ) {
      arr[i] += 10;
    } else {
      arr[i] *= 2;
    }
  }

  for(int i=0; i<arrSize; i++ ) {
    cout << arr[i] << " ";
  }

  return 0;
}