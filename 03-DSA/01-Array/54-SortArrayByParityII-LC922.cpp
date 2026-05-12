
// 922. Sort Array By Parity II  |  Platform : LeetCode

// Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
// Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
// Return any answer array that satisfies this condition.

// Example 1:
// Input: nums = [4,2,5,7]
// Output: [4,5,2,7]
// Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.

// Example 2:
// Input: nums = [2,3]
// Output: [2,3]

// Constraints:
// 2 <= nums.length <= 2 * 10^4
// nums.length is even.
// Half of the integers in nums are even.
// 0 <= nums[i] <= 1000

// Follow Up: Could you solve it in-place?




#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {

    int evenIndex = 0, oddIndex = 1;

    while ( evenIndex < nums.size() && oddIndex < nums.size() ) {
        if ( nums[evenIndex] % 2 == 0 ) {
            evenIndex += 2;
        } else {
            swap( nums[evenIndex], nums[oddIndex] );
            oddIndex += 2;
        }
    }
    
    return nums;
}


int main() {
    vector<int> nums = {4,2,5,7};
    vector<int> result = sortArrayByParityII(nums);

    cout << "[ ";
    for ( int val : result ) {
        cout << val << " ";
    }
    cout << "]";
    return 0;
}



// Approach : Two Pointer

// Solution Core : We will initalize two pointer the first pointer will point to the even index 
// and the other pointer will point to the odd index, now if the first pointer encounters even element it will
// shift the pointer forward and if not we will swap it with the element where our second pointer is pointing and shift the
// second pointer backward, we will do this until both the pointers are within the range.

// Time Complexity : O(n)
// Space Complexity : O(1)