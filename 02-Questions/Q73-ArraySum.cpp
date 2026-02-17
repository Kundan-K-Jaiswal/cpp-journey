// Calculate the sum of all the elements in the given array

#include<iostream>
using namespace std;
int main () {
  int arr[5];
  for(int i=0; i<5; i++) {
    cin >> arr[i];
  }

  int sum = 0;
  for(int i=0; i<5; i++) {
    sum += arr[i];
  }

  cout << "The sum of the array is : " << sum;

  return 0;
}