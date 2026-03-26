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
  int n = nums.size();
  int minMajorCount = n/2;
  for ( int i=0; i<n; i++ ) {
    int count = 0;
    for ( int j = i; j<n; j++ ) {
      if (nums[i] == nums[j]) {
        count++;
      }
    }
    if ( count >= minMajorCount ) {
      return nums[i];
    }
  }
  return -1000;
}

int main() {

  vector<int> nums = {3};

  cout << majorityElement(nums) << endl;

  return 0;
}



// Approach : Brute Force
// Concept : Counting frequency for each elemnt in the array & checking if it is >= floor val of n/2
// Time Complexity : O(n2)
// Space Complexity : O(1)