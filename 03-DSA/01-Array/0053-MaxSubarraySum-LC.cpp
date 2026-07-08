// 53. Maximum Subarray | Platform : LeetCode
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Example 1:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Example 2:
// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.

// Example 3:
// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 
// Constraints:
// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104


#include<iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
  
  int maxSum = arr[0], sum = 0;
  for (int val : arr ) {
    sum += val;
    maxSum = max(maxSum, sum);
    if(sum < 0 ) {
      sum = 0;
    }
  }
  cout << maxSum;
  return 0;
}



// Approach : Kadane's Algorithm
// Concept : If the subarray sum becomes -ve, that means it won't be included in our answer since we are looking for maximum subarray sum
// Time Complexity : O(n)
// Space Complexity : O(1)