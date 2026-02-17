/*
Print The given type of Pattern Using Nested Loops where "n = no of rows"
eg : 
n = 5
1 
A B
1 2 3
A B C D
1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main () {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++ ) {
    for (int j = 1; j<=i; j++) {
      if ( i % 2 == 0 ) {
      cout << char(64 + j) << " ";
      } else {
        cout << j << " ";
      }
    }
    cout << endl;
  }
  return 0;
}