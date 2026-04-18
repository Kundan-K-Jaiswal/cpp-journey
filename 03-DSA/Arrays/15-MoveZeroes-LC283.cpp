
// 283. Move Zeroes | Platform : LeetCode

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order 
// of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]
 

// Constraints:
// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 

// Follow up: Could you minimize the total number of operations done?


#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int pos = 0;
    for (int val : nums ) {
        if ( val != 0 ) {
            nums[pos++] = val;
        }
    }
    for ( pos; pos<nums.size(); pos++) {
        nums[pos] = 0;
    }
}

int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for (int val : nums ) {
        cout << val << " ";
    }
    return 0;
}



// Approach : Two Pointer

// Solution Core : We wil track the position where we need to update using "pos" variable. Now, we will traverse through the array and
// find the non-zero element and replace it at nums[pos]. After the loop terminates we will update the remaining index
// values with zeros.

// Time Complexity : O(n)
// Space Complexity : O(1)