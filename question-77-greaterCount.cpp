// Count the number of elements in given array greater than a given number x.

#include<iostream>
using namespace std;

int main() {

  int x, arr[10];

  cout << "Enter the elements of array ( size 10 ) : ";
  for(int i=0; i<10; i++) {
    cin >> arr[i];
  }

  for(int i=0; i<10; i++) {
    cout <<  arr[i] << " ";
  } 
  cout << endl;

  cout << "Enter the number to get count of the elements that are greater than it: " ;
  cin >> x;

  int count = 0;

  for(int i=0; i<10; i++) {
    if( arr[i] > x ) {
      count ++;
    }
  } 

  cout << "The count of " << x << " in the given array is : " << count;

  return 0;

}