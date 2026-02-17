//If the ages of Ram, Shyam, Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include<iostream>
using namespace std;

int main() {

  int ram_age, shyam_age, ajay_age;
  cout << "Enter the ages of Ram, Shyam & Ajay respectively : ";
  cin >> ram_age >> shyam_age >> ajay_age;

  if (ram_age < shyam_age) {
    if (ram_age < ajay_age) {
      cout << "The youngest one is Ram as his age is : " << ram_age;
    } else {
      cout << "The youngest one is Ajay as his age is : " << ajay_age;
    }
  } else {
    if (shyam_age < ajay_age) {
      cout << "The youngest one is Shyam as his age is : " << shyam_age;
    } else {
      cout << "The youngest one is Ajay as his age is : " << ajay_age;
    }
  }

  return 0;
}