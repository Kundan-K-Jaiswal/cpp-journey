// Find the second largest element in the given Array.

#include<iostream>
using namespace std;

int main() {

  int arr[]={111,2,56,65,20,35,95,21,68,5,41,13,52,6,5,32,2,6,31,56,23,13,2,32,6,12};

  int size = sizeof(arr)/4;
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int largest1 = INT32_MIN, largest2 = INT32_MIN;
  for(int i = 0; i < size; i++) {
    if(arr[i] > largest1 ) {
      largest2 = largest1;
      largest1 = arr[i];
    } else {
      if (arr[i] > largest2) {
        largest2 = arr[i];
      }
    }
  }

  cout << "The second largest element in the given array is : " << largest2;

  return 0;

}