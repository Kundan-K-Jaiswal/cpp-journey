/*
Print the following type of binary tirangle pattern 
eg : n = 5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/


#include<iostream>
using namespace std;
int main () {
  int num, n=1;
  bool r;
  cin >> num;
  for(int i = 1; i<=num; i++ ){
    if (i % 2 == 0) {
        r = false;
      } else {
        r = true;
      }
    for (int j = 1; j<=i; j++) {
      cout << r << " ";
      r = !r;
    }
    cout << endl;
  }
  return 0;
}