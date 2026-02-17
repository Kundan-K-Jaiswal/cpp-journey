// Print sum from 1 to n using recursion

#include<iostream>
using namespace std;

// int sum (int n) {
//   int s = 0;
//   if (n==0) {
//     return 0;
//   }
//   s += sum(n-1);
//   return s+n;
// }
int sum (int n) {
  if (n==1) return 1;
  return n + sum(n-1);
}

int main() {
  int n;
  cin >> n;
  cout << sum(n);
  return 0;
}