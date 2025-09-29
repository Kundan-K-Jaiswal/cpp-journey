// if we pass array to a function then is that pass by value or pass by reference ? let's find out

#include<iostream>
using namespace std;
void change(int arr1[]) {
  arr1[2] = 800;
}

int main() {
  int arr[3] = {4,5,6};
  for(int i = 0; i<3; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  change(arr);
  for(int i = 0; i<3; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}






















// Answer : it is pass by reference