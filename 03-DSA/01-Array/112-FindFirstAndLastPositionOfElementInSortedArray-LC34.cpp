
// 34. Find First and Last Position of Element in Sorted Array  |  Platform : LeetCode

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given 
// target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// Example 3:
// Input: nums = [], target = 0
// Output: [-1,-1]

// Constraints:
// 0 <= nums.length <= 10^5
// -10^9 <= nums[i] <= 10^9
// nums is a non-decreasing array.
// -10^9 <= target <= 10^9




#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0, end = nums.size()-1;
    vector<int> ans = {-1,-1};
    int targetIndex = -1;
    while ( start <= end ) {
        int mid = start + (end-start)/2;
        if (nums[mid]==target) {
            targetIndex = mid;
            break;
        } else if ( nums[mid] < target ) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if ( targetIndex == -1 ) {
        return ans;
    }
    int i = targetIndex;
    while ( i < nums.size() && nums[i] == target ) {
        i++;
    }
    ans[1] = i-1;

    i = targetIndex;
    while ( i >= 0 &&  nums[i] == target ) {
        i--;
    }
    ans[0] = i+1;

    return ans; // Time Complexity is O(n)
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 6;
    vector<int> result = searchRange(nums,target);
    for ( int val : result ) {
        cout << val << " ";
    }
    return 0;
}