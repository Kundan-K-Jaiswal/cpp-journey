// Given a matrix 'a' of dimension m x n and 2 cordinates (l1,r1) and (l2,r2). 
// Return the sum of the rectangle form (l1,r1) to (l2,r2).

// eg : 
//         0 1 2 3 4 5
//        _____________
//     0 | 1 2 3 4 5 6
//     1 | 7 8 9 1 2 3
//     2 | 4 5 6 7 8 9
//     3 | 8 7 6 5 4 3

// (1,2)(2,5) = (1,2) + (1,3) + (1,4) + (1,5) + (2,2) + (2 3) + (2,4) + (2,5)
//            = 9 + 1 + 2 + 3 + 6 + 7 + 8 + 9
//            = 45

#include<iostream>
using namespace std;

int main () {
  int m, n;
  cin >> m >> n;
  int arr[m][n];
  for (int i= 0; i<= m; i++) {
    for (int j= 0; j<= n; j++) {
      cin >> arr[i][j];
    }
  }
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  int sum = 0;
  for (int i= l1; i<= r1; i++) {
    for (int j= l2; j<= r2; j++) {
      sum += arr[i][j];
    }
  }

  cout << sum;

  return 0;
}

