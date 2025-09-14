// WAP to count digits of a given number.

#include <iostream>
using namespace std;
int main()
{
  int num, count = 0;
  cin >> num;

  if (num != 0) {
    while (num != 0) {
      count++;
      num /= 10;
    }
    cout << "There are " << count << " digits in the given number.";
  } else {
    cout << "There is 1 digit.";
  }

  return 0;
}