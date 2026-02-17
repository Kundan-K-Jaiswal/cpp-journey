// Question : Write a program to calculate volume of sphere

#include<iostream>
using namespace std;

int main() {
  float radius, volume;
  radius = 6;
  volume = (4/3)*3.14*radius*radius*radius;
  cout << "The Volume For The Given Sphere Is : " << volume;
  return 0;
}