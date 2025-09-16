/*
Print The Plus Star Triangle Pattern Using Nested Loops where "n = no of rows"
eg : 
n = 5
    1 2 3 4 5
1  # # * # #
2  # # * # #
3  * * * * *
4  # # * # #
5  # # * # # 
*/

#include<iostream>
using namespace std;
int main () {
  int n;
  cin >> n;
  //METHOD 1
  // for(int i = 1; i<=n; i++) {
  //   if (i == n/2+1 ) {
  //     for(int j = 1; j<=n; j++) {
  //       cout<<"*";
  //     }
  //   } else {
  //     for(int j = 1; j<=n/2; j++) {
  //       cout<<" ";
  //     }
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  //METHOD 2
  for(int i = 1; i<=n; i++) {
    for(int j = 1; j<=n; j++) {
      if ((i == n/2 +1) ||  (j == n/2 +1)) {
        cout <<"* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}