// 1. Two Sum | Platform : LeetCode

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]
 
// Constraints:
// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
  vector<int> duplicate = nums;
  int pair1, pair2;

  sort(duplicate.begin(),duplicate.end());

  int st = 0, end = duplicate.size() - 1;
  while(st<end) {
    int sum = duplicate[st] + duplicate[end];
    if ( sum == target ) {
      pair1 = duplicate[st];
      pair2 = duplicate[end];
      break;
    } else if ( sum < target ) {
      st++;
    } else {
      end--;
    }
  }

  vector<int> ans;
  for(int i = 0; i<nums.size(); i++ ) {
    if ( nums[i] == pair1 || nums[i] == pair2 ) {
      ans.push_back(i);
    }
  }
  return ans;
}

int main() {
  vector<int> nums = {2,7,11,15};
  int target = 9;

  vector<int> result = twoSum(nums, target);
  for ( auto val: result ) {
    cout << val << " ";
  }

  return 0;
}



// Approach : Two Pointer & Sorting 
// Concept : Sort the array and find the value pair whose sum = target using two pointer, now find the index of those value 
// Time Complexity : O(nlogn)
// Space Complexity : O(n)