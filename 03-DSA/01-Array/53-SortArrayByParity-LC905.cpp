
// 905. Sort Array By Parity  |  Platform : LeetCode

// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
// Return any array that satisfies this condition.

// Example 1:
// Input: nums = [3,1,2,4]
// Output: [2,4,3,1]
// Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

// Example 2:
// Input: nums = [0]
// Output: [0]

// Constraints:
// 1 <= nums.length <= 5000
// 0 <= nums[i] <= 5000




#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {

    int evenPointer = 0, oddPointer = nums.size()-1;

    while ( evenPointer < oddPointer ) {
        if ( nums[evenPointer] % 2 == 0 ) {
            evenPointer++;
        } else {
            swap(nums[evenPointer], nums[oddPointer]);
            oddPointer--;
        }
    }
    
    return nums;
}


int main() {
    vector<int> nums = {3,1,2,4};
    vector<int> result = sortArrayByParity(nums);

    cout << "[ ";
    for ( int val : result ) {
        cout << val << " ";
    }
    cout << "]";
    return 0;
}



// Approach : Two Pointer

// Solution Core : We will initalize two pointer the first pointer will point to the index where the even numbers ends
// and the other pointer will point from the last index, now if the first pointer encounters even element it will
// shift the pointer forward and if not we will swap it with the element where our second pointer is pointing and shift the
// second pointer backward, we will do this until our first pointer is smaller than the second pointer.

// Time Complexity : O(n)
// Space Complexity : O(1)