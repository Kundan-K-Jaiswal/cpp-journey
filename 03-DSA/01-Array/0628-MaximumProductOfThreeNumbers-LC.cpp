
// 628. Maximum Product of Three Numbers  |  Platform : LeetCode


// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
 

// Example 1:
// Input: nums = [1,2,3]
// Output: 6


// Example 2:
// Input: nums = [1,2,3,4]
// Output: 24


// Example 3:
// Input: nums = [-1,-2,-3]
// Output: -6
 

// Constraints:
// 3 <= nums.length <= 10^4
// -1000 <= nums[i] <= 1000




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumProduct(vector<int>& nums) {
    int n = nums.size()-1;
    sort(nums.begin(),nums.end());
    int result = max((nums[0]*nums[1]*nums[n]), (nums[n]*nums[n-1]*nums[n-2]));
    return result;

}

int main() {
    vector<int> nums = {-1,-2,-3};
    cout << maximumProduct(nums);
    return 0;
}