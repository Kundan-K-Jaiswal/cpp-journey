
// 75. Sort Colors | Platform : LeetCode 

// Given an array nums with n objects colored red, white, or blue, sort them in-place so 
// that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Example 1:
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// Example 2:
// Input: nums = [2,0,1]
// Output: [0,1,2]

// Constraints:
// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.

// Follow up: Could you come up with a one-pass algorithm using only constant extra space?





#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low=0, mid=0, high = n-1;
    while ( mid <= high ) {
        if (nums[mid] == 0) {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    cout << "[ "; 
    for ( int val : nums ) {
        cout << val << " " ;
    }
    cout << "]";
    return 0;
}



// Approach : Three pointer

// Solution Core : We will create three variable : low that points to the end of 0, mid which points at the start of 1
// and high that points to the start of the 2. Now we will traverse throught the array and update the values accordingly
// so that the above variables justify their poition at the end.

// Time Complexity : O(n)
// Space Complexity : O(1)