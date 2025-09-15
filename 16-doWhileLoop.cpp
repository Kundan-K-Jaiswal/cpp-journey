/*
initialization
do {
statements that is to be executed multiple times
updation
} while ( condition )
*/


#include<iostream>
using namespace std;

int main() {
  //do-while loop runs at least one time.
  int i = 1;
  do {
    cout << i << ". Hello World!" << endl;
    i++;
  } while (i <=10);

  return 0;
}