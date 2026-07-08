// 540. Single Element in a Sorted Array | Platform : LeetCode

// You are given a sorted array consisting of only integers where every element appears exactly twice, 
// except for one element which appears exactly once.
// Return the single element that appears only once.
// Your solution must run in O(log n) time and O(1) space.

// Example 1:
// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2

// Example 2:
// Input: nums = [3,3,7,7,10,11,11]
// Output: 10

// Constraints:
// 1 <= nums.length <= 10^5
// 0 <= nums[i] <= 10^5



#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if ( n == 1 ) return nums[0];
    int st = 0, end = n-1;
    while ( st <= end ) {
        int mid = st + (end - st) / 2;
        
        if ( mid == 0 && nums[0] != nums[1] ) return nums[mid];
        if ( mid == n-1  && nums[n-1] != nums[n-2] ) return nums[mid];

        if ( nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1] ) return nums[mid];

        if ( mid % 2 == 0 ) { // even number of element on both side
            if ( nums[mid] == nums[mid-1]) { // left match
                end = mid-1;
            } else { // right match 
                st = mid + 1;
            }
        } else { // odd number of element on both side
            if ( nums[mid] == nums[mid-1]) { // left match
                st = mid + 1;
            } else { // right match 
                end = mid-1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(nums);
    return 0;
}



// Approach : Binary Search

// Solution Core : We will calculate the mid point and check if the element at mid is not equal to its adjecent side
// then val at mid will be output, if not so then check if the mid is even means both side has even elements now check which 
// side val is equal to val at mid and select the search space with odd number of elements.

// Time Complexity : O(log n)
// Space Complexity : O(1)