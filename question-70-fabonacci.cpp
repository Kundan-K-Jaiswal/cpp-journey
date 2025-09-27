// Write a function to calculate the nth fibonacci number using recurstion

#include<iostream>
using namespace std;

int fabo(int n) {
  if (n==1) return 0;
  if (n==2) return 1;
  return fabo(n-1) + fabo(n-2);
  
}

int main () {
  int n;
  cin >> n;
  cout << fabo(n);
  return 0;
}


// Euler's Tour Tree