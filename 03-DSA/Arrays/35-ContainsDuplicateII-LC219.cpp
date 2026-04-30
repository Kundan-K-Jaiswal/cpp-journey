
// 219. Contains Duplicate II | Platform : LeetCode

// Given an integer array nums and an integer k, return true if there are two distinct indices i and j 
// in the array such that nums[i] == nums[j] and abs(i - j) <= k.

// Example 1:
// Input: nums = [1,2,3,1], k = 3
// Output: true

// Example 2:
// Input: nums = [1,0,1,1], k = 1
// Output: true

// Example 3:
// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false

// Constraints:
// 1 <= nums.length <= 10^5
// -10^9 <= nums[i] <= 10^9
// 0 <= k <= 10^5




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {

    vector<pair<int,int>> pairNums;

    for (int i = 0; i<nums.size();i++ ) { // creating pair to get index of common elements
        pairNums.push_back({nums[i],i});
    }

    sort(pairNums.begin(), pairNums.end()); // sorting

    for (int i = 0; i<nums.size()-1;i++ ) {
        if ( pairNums[i].first == pairNums[i+1].first ) { // checking for common element
            if ( pairNums[i+1].second - pairNums[i].second <= k ) { // checking if diff <= k
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    cout << containsNearbyDuplicate(nums,k);
    return 0;
}



// Approach : Pair

// Solution Core : Since we need the original index to find out if it satisfy abs(i - j) <= k we will create
// a pair vector that will store the data and the original index, now we will sort the vector based on data so that
// we will get common elements adjecent to eachother, now we will traverse through the sorted vector and if we find 
// adjecent elements same then we will check abs(i - j) <= k if yes return true else move to next element and 
// repeat the same, at the end if the nothing is returned throughout the traversal means the ans is false
// so return false.

// Time Complexity : O(nlog(n))
// Space Complexity : O(n)