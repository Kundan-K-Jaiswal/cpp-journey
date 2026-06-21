
// 3718. Smallest Missing Multiple of K    |  Platform : LeetCode

// Given an integer array nums and an integer k, return the smallest positive multiple of k that is missing from nums.
// A multiple of k is any positive integer divisible by k.

// Example 1:
// Input: nums = [8,2,3,4,6], k = 2
// Output: 10
// Explanation:
// The multiples of k = 2 are 2, 4, 6, 8, 10, 12... and the smallest multiple missing from nums is 10.

// Example 2:
// Input: nums = [1,4,7,10,15], k = 5
// Output: 5
// Explanation:
// The multiples of k = 5 are 5, 10, 15, 20... and the smallest multiple missing from nums is 5.

// Constraints:
// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100
// 1 <= k <= 100





#include<iostream>
#include<vector>
using namespace std;

int missingMultiple(vector<int>& nums, int k) {
    bool arr[101] = {0};
    for ( int val : nums ) { // stores those values which are present in array
        arr[val] = 1;
    }
    int mul = k;
    while ( true ) {
        if ( k > 100 || arr[k] == 0 ) { // finds missing multiple of K
            break;
        }
        k += mul;
    }
    return k;
}


int main() {
    vector<int> nums = {1,4,7,10,15};
    int k = 5;
    cout << missingMultiple(nums,k);
    return 0;
}