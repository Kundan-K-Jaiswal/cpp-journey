// Display this GP - 1,2,4,8,16,32,... upto 'n' terms.

#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int output = 1;
  for (int i=0; i<n; i++) {
    cout << output << " ";
    output *= 2;
  }
  return 0;
}