#include<iostream>
using namespace std;

void myWorld() {
  cout << "Hello World";
  myWorld();
}

int main() {
  myWorld();
  return 0;
}