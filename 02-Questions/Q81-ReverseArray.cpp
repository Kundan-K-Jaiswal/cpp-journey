// Write a program to reverse the array without using any extra array.

#include<iostream>
using namespace std;

int main() {

  int arr[] = {1,2,3,4,5,6,7,8,9,10};

  int size = sizeof(arr)/4;

  for ( int i = 0; i<size; i++ ) {
    cout << arr[i] << " ";
  }
  cout << endl;

  for ( int i = 0; i<size/2; i++ ) {
    arr[i] = arr[i] + arr[size-1-i];
    arr[size-1-i] = arr[i] - arr[size-1-i];
    arr[i] = arr[i] - arr[size-1-i]; 
  }

  for ( int i = 0; i<size; i++ ) {
    cout << arr[i] << " ";
  }

  return 0;
}