// WAP to print factorial of first n numbers

#include<iostream>
using namespace std;

int main() {
  int n, factorial = 1;
  cin >> n;

  int i = 1;
  while(i<=n) {
    factorial *= i;
    cout << factorial << " ";
    i++;
  }

  return 0;
}