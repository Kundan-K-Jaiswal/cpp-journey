// break -> used to stop the function / helps getting out of the loop

#include<iostream>
using namespace std;
int main () {
  for ( int i = 0 ; i<10; i++) {
    if (i == 5) {
      break; // if i = 5 then the loop will end and no other numbers will be printed after 5
    }
    cout << i;
  }
  return 0;
}