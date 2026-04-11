// 238. Product of Array Except Self | Platform : LeetCode

// Given an integer array nums, return an array answer such that answer[i] is equal to the
// product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
 
// Constraints:
// 2 <= nums.length <= 10^5
// -30 <= nums[i] <= 30
// The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.
 

// Follow up: Can you solve the problem in O(1) extra space complexity? 
// (The output array does not count as extra space for space complexity analysis.)



#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int sz = nums.size();
    vector<int> ans(sz,1);

    // prefix
    for ( int i = 1; i<sz; i++ ) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // suffix
    int suffix = 1;
    for ( int i = sz-2; i>=0; i-- ) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;

}

int main() {
    vector<int> nums = {2,3,4,5};

    vector<int> result = productExceptSelf(nums);

    for (int val : result ) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}



// Approach : Prefix & Suffix

// Concept : Since, we have to exclude self, we will calculate the left product for each index and store it.
// Now, we will calculate the right product and multiply with current value stored.


// Time Complexity : O(n)
// Space Complexity : O(1) [The output array does not count as extra space for space complexity analysis.]