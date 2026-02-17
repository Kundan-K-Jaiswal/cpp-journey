// Write a function to swap two numbers 

#include<iostream>
using namespace std;

void swap1(int a, int b) { // call by value -> no change in actual parameters
  int temp = a;
  b = a;
  a = temp;
}

void swap2(int& a, int& b) { // call by reference -> cange in actual parameters
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}

void swap3(int* a, int* b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

int main() {
  int a, b;
  cin >> a >> b;
  // swap1(a,b);
  // swap2(a,b);
  swap3(&a,&b);
  cout << a << ' ' << b;
  return 0;
}