// Write a function that returns the index of the target variable of a vector


#include<iostream>
#include<vector>
using namespace std;

int findIndex(vector <int> nums, int target) {
  int index = 0;
  for(int val : nums ) {
    if (val == target) {
      return index;
    }
    index++;
  }
  return -1;
}

int main() {
  vector <int> nums = {1,5,6,9,8,5,3,2,1,6,5,4,7,8,9,6,5};
  int target = 7;

  cout << findIndex(nums, target);

  return 0;
}