#include<iostream>
using namespace std;

int main() {

  // && -> it is called 'and' if both condition are true it gives true else false
  // || -> it is called 'or' if any one of the condition is true it gives true else false
  // ! -> it is called 'not' if true it returns false and vise versa

  int a = 2, b = 3;

  cout << "Understanding && behaviour." << endl;
  cout << ((a == 2) && (b==3)); // both condition is true so, it will give true (1)
  cout << endl; 
  cout << ((a != 2) && (b==3)); // first condition is false so, it will give false (0)
  cout << endl;
  cout << ((a == 2) && (b!=3)); // second condition is false so, it will give false (0)
  cout << endl;
  cout << ((a != 2) && (b!=3)); // both condition are false so, it will give false (0)
  cout << endl << endl;

  cout << "Understanding || behaviour." << endl;
  cout << ((a == 2) || (b==3)); // both condition is ture so, it will give true (1)
  cout << endl;
  cout << ((a != 2) || (b==3)); // second condition is true so, it will give true (1)
  cout << endl;
  cout << ((a == 2) || (b!=3)); // first condition is true so, it will give true (1)
  cout << endl;
  cout << ((a != 2) || (b!=3)); // both condition is false so, it will give false (0)
  cout << endl << endl;


  cout << "Understanding ! behaviour." << endl;
  cout << !true; // since we passed true it will give false (0)
  cout << endl;
  cout << !false;  // since we passed false it will give true (1)
  cout << endl << endl;

  return 0;
}