
// 674. Longest Continuous Increasing Subsequence  |  Platform : LeetCode 

// Given an unsorted array of integers nums, return the length of the longest continuous increasing subsequence 
// (i.e. subarray). The subsequence must be strictly increasing.
// A continuous increasing subsequence is defined by two indices l and r (l < r) such that it is 
// [nums[l], nums[l + 1], ..., nums[r - 1], nums[r]] and for each l <= i < r, nums[i] < nums[i + 1].

// Example 1:
// Input: numss= [1,3,5,4,7]
// Output: 3
// Explanation: The longest continuous increasing subsequence is [1,3,5] with length 3.
// Even though [1,3,5,7] is an increasing subsequence, it is not continuous as elements 5 and 7 are separated by element
// 4.

// Example 2:
// Input: nums = [2,2,2,2,2]
// Output: 1
// Explanation: The longest continuous increasing subsequence is [2] with length 1. Note that it must be strictly
// increasing.

// Constraints:
// 1 <= nums.length <= 10^4
// -10^9 <= nums[i] <= 10^9




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int maxLength = 1, currentLength = 1;
    for (int i=1; i<nums.size(); i++ ) {
        if( nums[i] > nums[i-1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength,currentLength);
            currentLength = 1;
        }
    }
    maxLength = max(maxLength,currentLength);
    return maxLength;
}



int main() {
    vector<int> nums = {2,2,2,2,2};
    cout << findLengthOfLCIS(nums);
    return 0;
}



// Approach : Array Traversal & Check

// Solution Core : We will initalize two valriables -> max lenght and current length with 1. Now, we will start traversing 
// form index 1. We will check if the current element is greater than previous element then update current length to plus 1 
// and if it is not the case then we will update the max length to the greter value among max length and current length. 
// At the end we will return the value of max length

// Time Complexity : O(n(log(n))) 
// Space Complexity : O(1)