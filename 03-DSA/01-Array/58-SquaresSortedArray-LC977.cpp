
// 977. Squares of a Sorted Array  |  Platform : LeetCode

// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in 
// non-decreasing order.

// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].

// Example 2:
// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 
// Constraints:
// 1 <= nums.length <= 10^4
// -10^4 <= nums[i] <= 10^4
// nums is sorted in non-decreasing order.

// Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution 
// using a different approach?




#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            ans[pos] = nums[left] * nums[left];
            left++;
        } else {
            ans[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }

    return ans;
}


int main() {
    vector<int> nums = {-7,-3,2,3,11};
    vector<int> result = sortedSquares(nums);
    cout << "[ ";
    for ( int val : result ) {
        cout << val << " ";
    }
    cout << "]";
    return 0;
}



// Approach : Two Pointer

// Solution Core : We wil check if the abs value of first element is greater than the last element then store last 
// element as first*first and if not store last*last

// Time Complexity : O(n)
// Space Complexity : O(n)