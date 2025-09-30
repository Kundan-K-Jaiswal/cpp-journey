#include<iostream>
using namespace std;

int main() {

  int ar[2][3] = {{1,2,3},{4,5,6}}; // initialisation
  
  cout << ar[0][0] << " ";
  cout << ar[0][1] << " ";
  cout << ar[0][2] << endl;
  cout << ar[1][0] << " ";
  cout << ar[1][1] << " ";
  cout << ar[1][2] << endl;

  int arr[3][2];
  
  //Input for 2D Array
  for(int i = 0; i<3; i++ ) {
    for (int j=0; j<2; j++) {
      cin >> arr[i][j];
    }
  }

  //Printing of 2D Array
  for(int i = 0; i<3; i++ ) {
    for (int j=0; j<2; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  //Note : we can initialise like this as well
  int arr1 [][3] = {1,2,3,4,5,6};   // here rows will be decided automatically
  int arr2 [4][2] = {1,2,3,4,5,6,7,8};

  return 0;
}