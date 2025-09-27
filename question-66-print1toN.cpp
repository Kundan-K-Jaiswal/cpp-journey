// write a program to print numbers form 1 to n using recursion ( using single parameter )

#include<iostream>
using namespace std;

int i = 1;

// void printnum(int n) {
//   if (i > n) return;
//   cout << i << endl;
//   i++;
//   printnum(n);
// }

void printnum(int n) {
  if (n==0) return;
  printnum(n-1);
  cout << n << endl;
}

int main() {
  int n;
  cin >> n;
  printnum(n);
  return 0;
}