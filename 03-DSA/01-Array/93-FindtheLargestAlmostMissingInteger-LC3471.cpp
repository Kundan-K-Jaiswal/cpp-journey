
// 3471. Find the Largest Almost Missing Integer  |  Platform : LeetCode

// You are given an integer array nums and an integer k.
// An integer x is almost missing from nums if x appears in exactly one subarray of size k within nums.
// Return the largest almost missing integer from nums. If no such integer exists, return -1.
// A subarray is a contiguous sequence of elements within an array.
 
// Example 1:
// Input: nums = [3,9,2,1,7], k = 3
// Output: 7
// Explanation:
// 1 appears in 2 subarrays of size 3: [9, 2, 1] and [2, 1, 7].
// 2 appears in 3 subarrays of size 3: [3, 9, 2], [9, 2, 1], [2, 1, 7].
// 3 appears in 1 subarray of size 3: [3, 9, 2].
// 7 appears in 1 subarray of size 3: [2, 1, 7].
// 9 appears in 2 subarrays of size 3: [3, 9, 2], and [9, 2, 1].
// We return 7 since it is the largest integer that appears in exactly one subarray of size k.

// Example 2:
// Input: nums = [3,9,7,2,1,7], k = 4
// Output: 3
// Explanation:
// 1 appears in 2 subarrays of size 4: [9, 7, 2, 1], [7, 2, 1, 7].
// 2 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
// 3 appears in 1 subarray of size 4: [3, 9, 7, 2].
// 7 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
// 9 appears in 2 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1].
// We return 3 since it is the largest and only integer that appears in exactly one subarray of size k.

// Example 3:
// Input: nums = [0,0], k = 1
// Output: -1
// Explanation:
// There is no integer that appears in only one subarray of size 1.

// Constraints:
// 1 <= nums.length <= 50
// 0 <= nums[i] <= 50
// 1 <= k <= nums.length



#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int largestInteger(vector<int>& nums, int k) {
        if ( k == 1 ) {
            unordered_map<int,int> freq;
            for ( int val : nums ) {
                freq[val]++;
            }
            int maxElement = -1;
            for ( auto p : freq ) {
                if (p.second == 1 ) {
                    maxElement = max(p.first, maxElement);
                }
            }
            return maxElement;
        } 

        if ( k == nums.size() ) {
            int maxEle = nums[0];
            for ( int val : nums ) {
                maxEle = max(maxEle, val);
            }
            return maxEle;
        }

        int firstVal = nums[0], count1 = 0;
        int lastVal = nums[nums.size()-1], count2 = 0;
        if ( firstVal == lastVal ) {
            return -1;
        }

        for ( int val : nums ) {
            if ( val == firstVal ) {
                count1++;
            } else if ( val == lastVal ) {
                count2++;
            }
        }

        if ( count1 == count2 ) {
            if (count1 > 1) {
                return -1;
            }
            if ( firstVal > lastVal ) {
                return firstVal;
            } else {
                return lastVal;
            }
        }

        if ( count1 == 1 ) {
            return firstVal;
        } else if ( count2 == 1 ) {
            return lastVal;
        }

        return -1;
    }


int main() {
    vector<int> nums = {3,9,7,2,1,7};
    int k = 4;
    cout <<  largestInteger(nums,k);
    return 0;
}