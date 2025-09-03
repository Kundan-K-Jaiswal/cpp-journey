// Question : Write a program to calculate simple interest of a sum

#include<iostream>
using namespace std;

int main() {
  float principal, rate, time, simpleInterest;
  principal = 50000;
  rate = 5.5;
  time = 3;
  simpleInterest = (principal*rate*time)/100;
  cout << "Simple Interest For The Given Details Is :" << simpleInterest;
  return 0;
}