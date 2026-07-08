// 33. Search in Rotated Sorted Array | Platform : LeetCode

// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly left rotated at an unknown 
// index k (1 <= k < nums.length) such that the resulting array 
// is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
// For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target 
// if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Example 3:
// Input: nums = [1], target = 0
// Output: -1
 
// Constraints:
// 1 <= nums.length <= 5000
// -10^4 <= nums[i] <= 10^4
// All values of nums are unique.
// nums is an ascending array that is possibly rotated.
// -10^4 <= target <= 10^4


#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int st =0, end = nums.size()-1;
    while ( st <= end ) {
        int mid = st + (end-st)/2; // finding the mid point of the vector

        if ( nums[mid] == target ) { // if target is found return mid
            return mid;
        } else if ( nums[st] <= nums[mid] ) { // in case 1st half is sorted
            if ( nums[st] <= target && target < nums[mid] ) { // check if target can be present in 1st half
                end = mid - 1; // if yes, our search space becomes 1st half
            } else {
                st = mid + 1; // if no, our search space becomes 2nd half
            }
        } else { // in case 2nd half is sorted 
            if ( nums[mid] < target && target <= nums[end] ) { // check if target can be present in 2nd half
                st = mid + 1; // if yes, our search space becomes 2nd half
            } else {
                end = mid - 1; // if no, our search space becomes 1st half
            }
        }
    }

    return -1; // if target not found, then return -1 
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << search(nums, target);
    return 0;
}



// Approach : Binary Search

// Solution Core : We will calculate the mid point and check if the left side is sorted or right side. 
// if left side is sorted we will check if our value exists in left then update our search space becomes left,
// if not right side becomes the search space. and same if the right side is sorted as well.

// Time Complexity : O(log n)
// Space Complexity : O(1)