// Write a program to find the highest factor of a number 'n' (other than n itself)

#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = n/2; i!=0; i--) {
    if (n%i == 0) {
      cout << "The highest factor of the given number ( other than itself ) is " << i;
      break;
    }
  }

  return 0;
}