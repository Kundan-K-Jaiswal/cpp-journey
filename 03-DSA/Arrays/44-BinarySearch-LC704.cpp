
// 704. Binary Search  |  Platform : LeetCode 

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search 
// target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

// Example 2:
// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1

// Constraints:
// 1 <= nums.length <= 10^4
// -10^4 < nums[i], target < 10^4
// All the integers in nums are unique.
// nums is sorted in ascending order.




#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int st = 0, end = nums.size()-1;
    while (st <= end) {
        int mid = st + (end-st)/2;
        if ( nums[mid] == target ) {
            return mid;
        } else if ( nums[mid] > target ) {
            end = mid-1;
        } else {
            st = mid+1;
        }
    }
    return -1;
}



int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << search(nums, target);
    return 0;
}



// Approach : Binary Search

// Solution Core : Since, the given array is sorted we will apply binary search ( search space becomes n/2 each time ) to it
// we will calculate the mid index and check if the value at mid is equal to target we will return mid else if the value 
// at mid is greater than target then move the end to mid -1, else move the start to mid + 1.

// Time Complexity : O(log n) 
// Space Complexity : O(1)