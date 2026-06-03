
// 3875. Construct Uniform Parity Array I |  Platform : LeetCode

// You are given an array nums1 of n distinct integers.
// You want to construct another array nums2 of length n such that the elements in nums2 are either all odd or all even.
// For each index i, you must choose exactly one of the following (in any order):
// nums2[i] = nums1[i]
// nums2[i] = nums1[i] - nums1[j], for an index j != i
// Return true if it is possible to construct such an array, otherwise, return false.

// Example 1:
// Input: nums1 = [2,3]
// Output: true
// Explanation:
// Choose nums2[0] = nums1[0] - nums1[1] = 2 - 3 = -1.
// Choose nums2[1] = nums1[1] = 3.
// nums2 = [-1, 3], and both elements are odd. Thus, the answer is true​​​​​​​.

// Example 2:
// Input: nums1 = [4,6]
// Output: true
// Explanation:​​​​​​​
// Choose nums2[0] = nums1[0] = 4.
// Choose nums2[1] = nums1[1] = 6.
// nums2 = [4, 6], and all elements are even. Thus, the answer is true.

// Constraints:
// 1 <= n == nums1.length <= 100
// 1 <= nums1[i] <= 100
// nums1 consists of distinct integers.




#include<iostream>
#include<vector>
using namespace std;

bool uniformArray(vector<int>& nums1) {
    return 1; // we can always create such array
}


int main() {
    vector<int> nums1 = {4,6};
    cout << uniformArray(nums1);
    return 0;
}



// Approach : Basic Understanding

// Solution Core : if every element is even it means it satisfies the condition. If there is even a single element in the
// vector which is odd then we can use it to create odd number i.e even - odd = odd and if we encounter any other odd 
// no then we can simply place it as it is as we are creating num2 as an odd array.

// Time Complexity : O(1)
// Space Complexity : O(1)