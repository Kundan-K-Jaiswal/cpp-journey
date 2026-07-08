
// 961. N-Repeated Element in Size 2N Array  |  Platform : LeetCode

// You are given an integer array nums with the following properties:
// nums.length == 2 * n.
// nums contains n + 1 unique values, n of which occur exactly once in the array.
// Exactly one element of nums is repeated n times.
// Return the element that is repeated n times.

// Example 1:
// Input: nums = [1,2,3,3]
// Output: 3

// Example 2:
// Input: nums = [2,1,2,5,3,2]
// Output: 2

// Example 3:
// Input: nums = [5,1,5,2,5,3,5,4]
// Output: 5
 
// Constraints:
// 2 <= n <= 5000
// nums.length == 2 * n
// 0 <= nums[i] <= 10^4
// nums contains n + 1 unique elements and one of them is repeated exactly n times.




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for ( int i=0; i<nums.size()-1; i++ ) {
            if ( nums[i] == nums[i+1]) {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }


int main() {
    vector<int> nums = {5,1,5,2,5,3,5,4};
    cout << repeatedNTimes(nums);
    return 0;
}



// Approach : Traversal With Condition

// Solution Core : Since we know that all the elements are unique except one, so we will sort the array and search for
// any duplicate element as soon as we found duplicate element return it.

// Time Complexity : O(nlogn)
// Space Complexity : O(1)