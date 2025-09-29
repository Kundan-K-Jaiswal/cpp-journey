#include<iostream>
using namespace std;
int main() {

  int a[5]; // declaration
  a[0] = 6; // initialization
  a[1] = 0;
  a[2] = 2;
  a[3] = 7;
  a[4] = 8;
  a[5] = 800;
  int b[] = {6,0,2,7,8}; // declaration & initialization

  
  for(int i=0; i<5; i++) { // array printing
    cout << a[i] << " ";
  }
  
  for(int i=0; i<5; i++) { // array input / updation
    cin >> b[i];
  }

  for(int i=0; i<5; i++) { // array printing
    cout << b[i] << " ";
  }
  
  return 0;
}

// Continuous memory allocation 