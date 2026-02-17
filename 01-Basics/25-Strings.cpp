#include<iostream>
using namespace std;
int main() {

  // kundan
  char arr[6] = {'K','u','n','d','a','n'};
  for (int i = 0; i<6; i++ ) {
    cout << arr[i];
  }
  cout << endl;

  string name = "Kundan Kumar Jaiswal";
  cout << name << endl;

  cout << "Enter Your Name : ";
  // cin >> name; // only takes single value (ie. if we use space in only the first word will be taken as input )
  // cout << name;

  getline(cin,name);
  cout << name << endl;


  //Indexing 
  string s = "Hello World !";
  cout << s << endl;
  cout << s[3] << endl;
  
  //Updating
  s[3] = 'g';

  cout << s[3] << endl;
  cout << s << endl;


  // Note : Strings has a extra character at the end called null character '\0' which indicates end of string

  // built in functions of string
  // .size()
  // .length()
    return 0;
}