// Find the difference between the sum of elements at even indices
// to the sum of elements at odd indices.

#include<iostream>
using namespace std;

int main() {

  int arr[]={1,2,56,65,20,35,95,21,68,5,41,213,52,6,5,32,2,6,31,56,23,13,2,32,6,12};

  int sizeOfArr = sizeof(arr)/4;
  int oddSum = 0, evenSum = 0;

  for(int i = 0; i<sizeOfArr; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  for(int i = 0; i<sizeOfArr; i++) {
    if(i%2==0) {
      evenSum += arr[i];
    } else {
      oddSum += arr[i];
    }
  }

  cout << "The difference between the sum of elements at even indices to the sum of elements at odd indices is : " << evenSum - oddSum;

  return 0;
}