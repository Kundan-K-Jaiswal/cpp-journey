/*
Print The Alphabet Square Pattern Using Nested Loops where "n = no of columns & no of rows"
eg : 
n = 3
A B C
A B C
A B C
*/

#include<iostream>
using namespace std;
int main () {
  int n;
  cin >> n;
  for(int i = 1; i<=n; i++) {
    for(int j = 65; j<=n+64; j++) {
      cout<<char(j)<<" ";
    }
    cout << endl;
  }
  return 0;
}