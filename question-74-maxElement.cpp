// Find the maximum value out of all the elements in the array


#include<iostream>
using namespace std;
int main() {
  int arr[] = {12,1,54,6,4,16,4,64,31,6,46,16,46,46,1,64,66,435,54,98,55};
  for(int i=0; i<(sizeof(arr)/4); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int maxNum = arr[0];          // You can use INT_MIN / INT_MAX

  for(int i=1; i<(sizeof(arr)/4); i++) {

    if (arr[i] > maxNum ) {
      maxNum = arr[i];              // Method 1
    }

    maxNum = max(maxNum,arr[i]);      // Method 2
    
  }

  cout << "The maximum element of the given array is : " << maxNum;

  return 0;
}
