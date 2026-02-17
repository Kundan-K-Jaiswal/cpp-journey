// Write a program to Print the transpose og the matrix entered by the user.

// | 1 2 3 4 |    | 1 5 |
// | 5 6 7 8 | -> | 2 6 |
//                | 3 7 |
//                | 4 8 |


#include<iostream>
using namespace std;

int main () {
  int m, n;
  cin >> m >> n;
  int arr[m][n];
  for (int i= 0; i< m; i++) {
    for (int j= 0; j< n; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i= 0; i< m; i++) {
    for (int j= 0; j< n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for (int i= 0; i< n; i++) {
    for (int j= 0; j< m; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
   

  return 0;
}

