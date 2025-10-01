// Input a string of size n and update all the even position in the string to character 'a'. Consider 0-based indexing.

#include<iostream>
using namespace std;
int main() {
  string str;
  cout << "Enter your string : ";
  getline(cin,str);
  cout << str << endl;

  for (int i = 0; i<str.length(); i++ ) {
    if (i % 2 == 0) {
      str[i] = 'a';
    }
  }

  cout << str;

  return 0;
}