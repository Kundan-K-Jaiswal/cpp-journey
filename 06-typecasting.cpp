#include<iostream>
using namespace std;

int main() {

  int num = 109;
  cout << (float)num/2<< endl;
  cout << (char)num<< endl;
  cout << (bool)num<< endl;
  cout << endl;

  float num2 = 37.109;
  cout << (int)num2 << endl;
  cout << (char)num2 << endl;
  cout << (bool)num2 << endl;
  cout << endl;

  char var = 'K';
  cout << (int)var << endl;
  cout << (float)var << endl;
  cout << (bool)var << endl;
  cout << endl;

  bool status = true;
  cout << (int)status << endl;
  cout << (float)status << endl;
  cout << (char)status << endl;
 
  // note : int(a) = (int)a

  return 0;
}