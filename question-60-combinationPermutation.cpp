//WAP to find combination and permutation

#include<iostream>
using namespace std;

int fact(int num) {
  int f = 1;
  for (int i=1; i<=num; i++) {
    f *= i;
  }
  return f;
}

int comb(int n, int r) {
  int combination = fact(n)/(fact(r)*(fact(n-r)));
  return combination;
}

int perm(int n, int r) {
  int permutation = fact(n)/(fact(n-r));
}

int main() {
  int n, r;
  cin >> n >> r;
  cout << comb(n,r) << endl;
  cout << perm(n,r) << endl;
  return 0;
}