#include<iostream>
using namespace std;

// function definition
void greet() { //function with a return type void
  cout << "Good Morning!" << endl;
  cout << "How are you?" << endl;
}

int main() {
  greet(); //function call
  cout << "Hello" << endl;
  greet(); //function call
  return 0;
}