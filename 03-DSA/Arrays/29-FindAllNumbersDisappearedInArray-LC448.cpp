
// 448. Find All Numbers Disappeared in an Array | Platform : LeetCode 

// Given an array nums of n integers where nums[i] is in the range [1, n], 
// return an array of all the integers in the range [1, n] that do not appear in nums.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]

// Example 2:
// Input: nums = [1,1]
// Output: [2]

// Constraints:
// n == nums.length
// 1 <= n <= 105
// 1 <= nums[i] <= n

// Follow up: Could you do it without extra space and in O(n) runtime? 
// You may assume the returned list does not count as extra space.




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {

    int sz = nums.size();
    vector<int> ans;
    sort(nums.begin(),nums.end());

    int prev = 1;
    if ( nums[0] != 1 ) {
        ans.push_back(1);
    }

    int i = 0;
    while(i<sz) {
        if ( nums[i] == prev ) {
        i++;
        } else if ( prev + 1 == nums[i] ) {
        prev++;
        i++;
        } else {
        prev++;
        ans.push_back(prev);
        }
    }

    for ( prev += 1; prev<=sz; prev++ ) {
        ans.push_back(prev);
    }

    return ans;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans = findDisappearedNumbers(nums);
    cout << "[ "; 
    for ( int val : ans ) {
        cout << val << " " ;
    }
    cout << "]";
    return 0;
}



// Approach : Sort and Find

// Solution Core : Firstly we will sort the given array, then we will check if the current element + 1 is not equal
// to the next element then we push that element in the ans vector and update our current element to current++.

// Time Complexity : O(n)
// Space Complexity : O(n)