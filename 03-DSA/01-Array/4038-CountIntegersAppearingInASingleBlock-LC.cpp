
// 4038. Count Integers Appearing in a Single Block  |  Platform : LeetCode

// You are given an integer array nums.
// An integer x is special if all occurrences of x in nums appear in a single contiguous block.
// Return the number of distinct special integers in nums.

 
// Example 1:
// Input: nums = [1,2,2,1]
// Output: 1
// Explanation:
// 1 appears at indices 0 and 3, forming two separate blocks, so it is not special.
// 2 appears in a single contiguous block at indices [1, 2], so it is special.
// Therefore, there is one special integer.


// Example 2:
// Input: nums = [3,3,1,2,2,1]
// Output: 2
// Explanation:
// 3 appears in a single contiguous block at indices [0, 1], so it is special.
// 1 appears at indices 2 and 5, forming two separate blocks, so it is not special.
// 2 appears in a single contiguous block at indices [3, 4], so it is special.
// Therefore, there are two special integers.


// Constraints:
// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100




#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countSpecialIntegers(vector<int>& nums) {
    unordered_map<int,int> freq;
    for ( int val : nums ) {
        freq[val]++;
    }

    int count = 1;
    int res = 0;
    int n = nums.size();
    if ( n == 1 ) {
        return 1;
    }
    for ( int i = 0; i < n-1; i++ ) {
        if ( nums[i] == nums[i+1] ) {
            count++;
        } else {
            if ( freq[nums[i]] == count ) {
                res++;
            }
            count = 1;
        }
    }
    if ( nums[n-1] != nums[n-2] ) {
        if ( freq[nums[n-1]] == 1 ) {
            res++;
        }
    } else {
        if ( freq[nums[n-1]] == count ) {
            res++;
        }
    }
    return res;
}

int main() {
    vector<int> nums = {3,3,1,2,2,1};
    cout << countSpecialIntegers(nums);
    return 0;
}