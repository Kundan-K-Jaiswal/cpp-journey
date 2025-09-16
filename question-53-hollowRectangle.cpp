/*
Print The Hollow Rectangle Pattern Using Nested Loops where "m = no of rows" & "n = no of columns"
eg : 
m = 4, n = 6
   1 2 3 4 5 6
1  * * * * * *
2  * # # # # *
3  * # # # # *
4  * * * * * *
*/

#include<iostream>
using namespace std;
int main () {
  int m,n;
  cin >> m >> n;
  for (int i=1; i<=m; i++) {
    for (int j=1; j<=n; j++) {
      if ( i == 1 || i == m || j == 1 || j == n) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}