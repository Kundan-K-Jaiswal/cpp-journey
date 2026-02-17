/*
Print The Star Rectangle Pattern Using Nested Loops where "m = no of rows", "n = no of columns"
eg : 
m = 3
n = 8
********
********
********
*/

#include<iostream>
using namespace std;
int main () {
  int m, n;
  cin >> m >> n;
  for(int i = 1; i<=m; i++) {
    for(int j = 1; j<=n; j++) {
      cout<<"*";
    }
    cout << endl;
  }
  return 0;
}