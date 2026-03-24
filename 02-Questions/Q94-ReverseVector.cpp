// WAF to reverse a vector ( must reflect in original vector )


#include<iostream>
#include<vector>
using namespace std;

void reverseVector( vector <int> &nums) {
  int start = 0, end = nums.size() - 1;
  for( start; start <= (nums.size()/2); start++) {
    swap(nums[start],nums[end]);
    end--;
  }
}


int main() {

  vector <int> nums = {1,2,3,4};

  cout << "Before Function Call :" << endl;
  for(int val: nums) {
  cout << val << " ";
  }
  cout << endl;

  reverseVector(nums);

  cout << "After Function Call :" << endl;
  for(int val: nums) {
    cout << val << " ";
  }

  return 0;
}