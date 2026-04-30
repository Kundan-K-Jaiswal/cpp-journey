
// 485. Max Consecutive Ones | Platform : LeetCode 

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 
// 1s is 3.

// Example 2:
// Input: nums = [1,0,1,1,0,1]
// Output: 2

// Constraints:
// 1 <= nums.length <= 10^5
// nums[i] is either 0 or 1.




#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {

    int maxCount = 0, count = 0;
    
    for ( auto val : nums ) {
        if ( val ) {
            count++;
        } else {
            maxCount=max(maxCount,count);
            count = 0;
        }
    }

    maxCount=max(maxCount,count);

    return maxCount;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}



// Approach : Array Traversal

// Solution Core : We will create two variable : maxCount which stores the maximum count, and count which stores the 
// count of consecutive 1. We will start traversing through our vector and increase count untill we find 0, after we
// find 0 we will store the maxvalue in maxCount & reset count to 0, at the end we will return the maxCount.

// Time Complexity : O(n)
// Space Complexity : O(1)