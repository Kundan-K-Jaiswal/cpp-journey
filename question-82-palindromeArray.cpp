// If an array arr contains n elements, then check if the given array is a palindrome or not.

#include<iostream>
using namespace std;

bool check(int arr[],int n) {
  int i = 0;
  int j = n-1;
  while(i<j) {
    if (arr[i] != arr[j]) return false;
    i++;
    j--;
  }
  return true;
}

int main() {
  int arr1[] = {1,2,3,2,1};
  int arr2[] = {1,2,3,2,1,0};

  int size1 = sizeof(arr1)/4;
  cout << "First : " << check(arr1, size1) << endl;

  int size2 = sizeof(arr2)/4;
  cout << "Second : " << check(arr2, size2);

  return 0;
}