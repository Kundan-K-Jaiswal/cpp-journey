

// 747. Largest Number At Least Twice of Others  |  Platform : LeetCode 

// You are given an integer array nums where the largest integer is unique.
// Determine whether the largest element in the array is at least twice as much as every other number in the array. 
// If it is, return the index of the largest element, or return -1 otherwise.

// Example 1:
// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.

// Example 2:
// Input: nums = [1,2,3,4]
// Output: -1
// Explanation: 4 is less than twice the value of 3, so we return -1.
 
// Constraints:
// 2 <= nums.length <= 50
// 0 <= nums[i] <= 100
// The largest element in nums is unique.




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dominantIndex(vector<int>& nums) {

    int sz = nums.size();
    vector<pair<int,int>> orderPair;
    for ( int i=0; i<sz; i++ ) {
        orderPair.push_back({nums[i],i});
    }

    sort(orderPair.begin(), orderPair.end());

    int largestElement = orderPair[sz-1].first;
    int secondLargest = orderPair[sz-2].first;

    if ( secondLargest * 2 <= largestElement ) {
        return orderPair[sz-1].second;
    }
    return -1;
}


int main() {
    vector<int> nums = {3,6,1,0};
    cout << dominantIndex(nums);
    return 0;
}



// Approach : Mathematical Logic

// Solution Core : We will sort the array and check if the twice of secondlast element is greater than or equal to 
// the last element then return true because after that every other element will be less than it which will satisfy
// the given condition, and if it is greater than the last element return false.


// Time Complexity : O(n(log n)) 
// Space Complexity : O(n)