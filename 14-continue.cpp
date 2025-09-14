// continue -> used to skip a condition and continue other iterations in the loop

#include<iostream>
using namespace std;
int main () {
  for ( int i = 0 ; i<10; i++) {
    if (i == 5) {
      continue; // if i = 5 then the loop won't execute further for this pass and will move to the next pass result : 5 is skipped
    }
    cout << i;
  }
  return 0;
}