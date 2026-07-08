
// 561. Array Partition | Platform : LeetCode

// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., 
// (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

// Example 1:
// Input: nums = [1,4,3,2]
// Output: 4
// Explanation: All possible pairings (ignoring the ordering of elements) are:
// 1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
// 2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
// 3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
// So the maximum possible sum is 4.

// Example 2:
// Input: nums = [6,2,6,5,1,2]
// Output: 9
// Explanation: The optimal pairing is (2, 1), (2, 5), (6, 6). min(2, 1) + min(2, 5) + min(6, 6) = 1 + 2 + 6 = 9.
 
// Constraints:
// 1 <= n <= 10^4
// nums.length == 2 * n
// -10^4 <= nums[i] <= 10^4




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arrayPairSum(vector<int>& nums) {

    int n = nums.size();

    sort(nums.begin(),nums.end()); // sorting

    int maxSum = 0;
    for ( int i = 0; i<n; i = i+2 ) { // traversing on even indices
        maxSum += nums[i];
    }

    return maxSum;
}

int main() {
    vector<int> nums = {6,2,6,5,1,2};
    cout << arrayPairSum(nums);
    return 0;
}



// Approach : Array Traversal

// Solution Core : Since pairing the smaller elements together will gives us maximum sum, so what we will do 
// is sort the array in accending order and then traverse through the even indices and add the value of those
// elements in our sum variable.

// Time Complexity : O(nlog(n))
// Space Complexity : O(1)