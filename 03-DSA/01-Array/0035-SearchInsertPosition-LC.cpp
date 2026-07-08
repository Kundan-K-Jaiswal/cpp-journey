// 35. Search Insert Position | Platform : LeetCode

// Given a sorted array of distinct integers and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4
 

// Constraints:
// 1 <= nums.length <= 10^4
// -10^4 <= nums[i] <= 10^4
// nums contains distinct values sorted in ascending order.
// -10^4 <= target <= 10^4



#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int st = 0, end = nums.size();
    while ( st <= end ) {
        int mid = st + ( end - st ) / 2;
        if ( nums[mid] == target ) {
            return mid;
        } else if ( nums[mid] < target ) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return st;
}

int main() {
    vector<int> nums = {1,3,5,6};
    int target = 5;

    cout << searchInsert(nums, target);

    return 0;
}



// Approach : Binary Search

// Concept : Since, the array is sorted use binary search to find the element. If element is not found 
// then the start variable will be pointing on the index where the element needs to be inserted.

// Time Complexity : O(log(n))
// Space Complexity : O(1)