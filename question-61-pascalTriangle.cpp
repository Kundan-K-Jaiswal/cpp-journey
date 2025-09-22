/* 
Write a program to print a Pascal Triangle
eg: n = 5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/

#include<iostream>
using namespace std;

int fact(int num ) {
  int f = 1;
  for (int i = 1; i<=num; i++) {
    f *= i;
  }
  return f;
}
int comb(int n, int r) {
  return fact(n)/(fact(r)*fact(n-r));
}

int main () {
  int n;
  cin >> n;

  for(int i=0; i<=n; i++) {
    for(int j=0; j<=i; j++) {
      cout << comb(i,j) << "  ";
    }
    cout << endl;
  }

  return 0;
}