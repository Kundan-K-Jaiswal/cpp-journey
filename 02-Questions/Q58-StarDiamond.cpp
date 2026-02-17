/*
Print the star diamond pattern
eg : n = 4
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
      
*/


#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  for (int i=1; i<n; i++) {
    for (int j = n-1; j>=i; j--) {
      cout << "  ";
    }
    for (int k = 1; k<=2*i-1; k++) {
      cout << "* ";
    }
    cout << endl;
  }

  for(int i =(2*n-2)-n; i>=1;i--){
    for (int j = i; j<=(2*n-1)-n; j++) {
      cout << "  ";
    }
    for (int k=1;k<=2*i-1;k++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}