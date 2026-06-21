
// 3684. Maximize Sum of At Most K Distinct Elements    |  Platform : LeetCode

// You are given a positive integer array nums and an integer k.
// Choose at most k elements from nums so that their sum is maximized. However, the chosen numbers must be distinct.
// Return an array containing the chosen numbers in strictly descending order.

// Example 1:
// Input: nums = [84,93,100,77,90], k = 3
// Output: [100,93,90]
// Explanation:
// The maximum sum is 283, which is attained by choosing 93, 100 and 90. We rearrange them in strictly descending order as [100, 93, 90].

// Example 2:
// Input: nums = [84,93,100,77,93], k = 3
// Output: [100,93,84]
// Explanation:
// The maximum sum is 277, which is attained by choosing 84, 93 and 100. We rearrange them in strictly descending order as [100, 93, 84]. We cannot choose 93, 100 and 93 because the chosen numbers must be distinct.

// Example 3:
// Input: nums = [1,1,1,2,2,2], k = 6
// Output: [2,1]
// Explanation:
// The maximum sum is 3, which is attained by choosing 1 and 2. We rearrange them in strictly descending order as [2, 1].

// Constraints:
// 1 <= nums.length <= 100
// 1 <= nums[i] <= 10^9
// 1 <= k <= nums.length




#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

vector<int> maxKDistinct(vector<int>& nums, int k) {
    vector<int> res;

    unordered_set<int> s(nums.begin(), nums.end()); // removes duplicate

    vector<int> nums1(s.begin(),s.end());
    sort(nums1.begin(),nums1.end(),greater<int>());

    for ( int i = 0; i<nums1.size() && i < k; i++ ) {
        res.push_back(nums1[i]);
    }
    return res;
}


int main() {
    vector<int> nums = {84,93,100,77,93};
    int k = 3;
    vector<int> res = maxKDistinct(nums,k);
    for ( int val : res ) {
        cout << val << " ";
    }
    return 0;
}