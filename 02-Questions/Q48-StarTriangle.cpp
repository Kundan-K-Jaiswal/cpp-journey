/*
Print The Bottom Star Triangle Pattern Using Nested Loops where "n = no of rows"
eg : 
n = 5
* * * * * 
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;
int main () {
  int n;
  cin >> n;
  for(int i = n; i>=1; i--) {
    for(int j = 1; j<=i; j++) {
      cout<<"* ";
    }
    cout << endl;
  }
  return 0;
}