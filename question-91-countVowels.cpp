// Input a string of length n and count all the vowels in the given string ( small letters )

#include<iostream>
using namespace std;
int main() {
  string str;
  cout << "Enter the string : ";
  getline(cin,str);

  int count = 0;

  for (int i=0; i<str.length(); i++ ) {
    if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) {
      count ++;
    }
  }

  cout << "There are " << count << " vowels in the given string '" << str << "'.";
}