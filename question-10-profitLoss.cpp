/* If cost price and selling price of an item is input through the keyboard, write a program to determine 
whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he 
made or loss he incurred.
*/

#include<iostream>
using namespace std;

int main () {

  float cp, sp;

  //taking input from the user
  cout << "Enter the cost price of an item : ";
  cin >> cp;
  cout << "Enter the selling price of an item :";
  cin >> sp;

  //checking for profit or loss
  if (cp > sp) {
    cout << "You have incurred loss of amount -> " << cp - sp;
  } else if ( cp < sp ) {
    cout << "You have made profit of amount -> " << sp - cp;
  } else {
    cout << "You have made neither profit nor loss.";
  }

  return 0;
}