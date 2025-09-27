// Write a program to print n to 1 using Recursion

#include<iostream>
using namespace std;

void printNum(int n) {
  if ( n == 0 ) {
    return;
  }
  cout << n << " ";
  printNum(n-1);
}

int main() {
  int n;
  cin >> n;
  printNum(n);
  return 0;
}