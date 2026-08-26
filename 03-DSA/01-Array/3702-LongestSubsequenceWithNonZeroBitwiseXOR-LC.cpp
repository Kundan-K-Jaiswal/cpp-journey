
// 3702. Longest Subsequence With Non-Zero Bitwise XOR  |  Platform : LeetCode


// You are given an integer array nums.
// Return the length of the longest subsequence in nums whose bitwise XOR is non-zero. If no such subsequence exists,
// return 0.
 

// Example 1:
// Input: nums = [1,2,3]
// Output: 2
// Explanation:
// One longest subsequence is [2, 3]. The bitwise XOR is computed as 2 XOR 3 = 1, which is non-zero.


// Example 2:
// Input: nums = [2,3,4]
// Output: 3
// Explanation:
// The longest subsequence is [2, 3, 4]. The bitwise XOR is computed as 2 XOR 3 XOR 4 = 5, which is non-zero.
 

// Constraints:
// 1 <= nums.length <= 10^5
// 0 <= nums[i] <= 10^9




#include<iostream>
#include<vector>
using namespace std;

int longestSubsequence(vector<int>& nums) {
    int count = 0;
    for ( int val : nums ) {
        if ( val != 0 ) {
            break;
        }
        count++;
    }
    if ( count == nums.size()) {
        return 0;
    } else {
        int res = nums[0];
        for ( int i = 1; i<nums.size(); i++ ) {
            res ^= nums[i];
        }
        if ( res == 0 ) {
            return nums.size()-1;
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums = {2,3,4};
    cout << longestSubsequence(nums);
    return 0;
}