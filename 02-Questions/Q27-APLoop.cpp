// Display this AP - 4,7,10,13,16... upto 'n'

/*
using AP Last Term Formula : 
a = 4
d = 3
 last term = a + (n-1)*d
           = 4 + (n-1)*3
           = 4 + (3*n - 3)
           = 3*n + 1
*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i=4; i<=3*n+1; i+=3) {
    cout << i << " ";
  }
  
  return 0;
}