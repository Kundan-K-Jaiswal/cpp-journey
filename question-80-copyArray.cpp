// Write a program to copy the contents of one array into another in the reverse order.

#include<iostream>
using namespace std;
int main() {

  int arr1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

  int size = sizeof(arr1)/4;
  int arr2[size];

  for(int i = 0; i<size; i++) {
    arr2[i] = arr1[size-i-1];
  }

  for(int i = 0; i<size; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;

  for(int i = 0; i<size; i++) {
    cout << arr2[i] << " ";
  }
  
  return 0;
}