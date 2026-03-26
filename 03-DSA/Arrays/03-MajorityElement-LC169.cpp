// 169. Majority Element | Platform : LeetCode

// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
 
// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 
// Constraints:
// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
// The input is generated such that a majority element will exist in the array.


#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums) {
  int ans, feq = 0;
  for ( int i=0; i<nums.size(); i++ ) {
    if ( feq == 0 ) {
      ans = nums[i];
    }
    if ( ans == nums[i] ) {
      feq++;
    } else {
      feq--;
    }
  }
  return ans;
}

int main() {

  vector<int> nums = {2,2,1,1,1,2,2};

  cout << majorityElement(nums) << endl;

  return 0;
}



// Approach : Moore's Voting Algorithm
// Concept : Since, the majority element exists, it cannot be completely eliminated by pairwise cancellations 
// Time Complexity : O(n)
// Space Complexity : O(1)