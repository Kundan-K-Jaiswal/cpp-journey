
// 896. Monotonic Array  |  Platform : LeetCode

// An array is monotonic if it is either monotone increasing or monotone decreasing.
// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing 
// if for all i <= j, nums[i] >= nums[j].
// Given an integer array nums, return true if the given array is monotonic, or false otherwise.

// Example 1:
// Input: nums = [1,2,2,3]
// Output: true

// Example 2:
// Input: nums = [6,5,4,4]
// Output: true

// Example 3:
// Input: nums = [1,3,2]
// Output: false
 
// Constraints:
// 1 <= nums.length <= 10^5
// -10^5 <= nums[i] <= 10^5




#include<iostream>
#include<vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool isMon = true;
    for ( int i = 0; i<nums.size()-1; i++ ) { // loop to check monotone increasing
        if ( nums[i] > nums[i+1] ) {
            isMon = false;
        }
    }
    if ( isMon ) {
        return true;
    }

    isMon = true;
    for ( int i = 0; i<nums.size()-1; i++ ) { // loop to check monotone decreasing
        if ( nums[i] < nums[i+1] ) {
            isMon = false;
        }
    }
    if ( isMon ) {
        return true;
    }

    return false;
}


int main() {
    vector<int> nums = {1,2,2,3};
    cout << isMonotonic(nums);
    return 0;
}



// Approach : Traversal & Flag

// Solution Core : Firstly we will check for monotone increasing, we will create a flag to record if it voilates the
// condition for monotonic increasing condition, if any next element is smaller than current element then it voilates
// the increasing condition so start checking for the monotone decreasing, if it voilates it as well return false,
// else return true if it satisfies the condition.

// Time Complexity : O(n)
// Space Complexity : O(1)