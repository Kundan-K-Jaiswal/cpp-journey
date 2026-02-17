/*  

switch(case) {
case 1: statements;
case 2: statements;
.
.
.
default : statements;
}

*/


#include<iostream>
using namespace std;

int main() {
  int case1 = 5;

  switch(case1) {
    case 1: 
      cout << "Case One." << endl;
      cout << "Learning Switch Statement.";
      break;
    case 2:
      cout << "Case Two." << endl;
      cout << "Learning Switch Statement.";
    default: 
      cout << "Default Case." << endl;
      cout << "Learning Switch Statement.";
  }

  return 0;
  
}