// WAP to check if a number is composite or not

#include<iostream>
using namespace std;

int main() {
  int num;
  bool composite = false;
  cin >> num;

  for (int i = 2; i<num/2; i++ ) {
    if (num%i==0) {
      composite = true;
      break;
    }
  }

  if (composite) {
    cout << "Given number is a composite number.";
  } else {
    cout << "Given number is not a prime number.";
  }

  return 0;
}