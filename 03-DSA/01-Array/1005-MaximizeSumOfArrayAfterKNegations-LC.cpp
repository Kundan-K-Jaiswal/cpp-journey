
// 1005. Maximize Sum Of Array After K Negations  |  Platform : LeetCode

// Given an integer array nums and an integer k, modify the array in the following way:
// choose an index i and replace nums[i] with -nums[i].
// You should apply this process exactly k times. You may choose the same index i multiple times.
// Return the largest possible sum of the array after modifying it in this way.

// Example 1:
// Input: nums = [4,2,3], k = 1
// Output: 5
// Explanation: Choose index 1 and nums becomes [4,-2,3].

// Example 2:
// Input: nums = [3,-1,0,2], k = 3
// Output: 6
// Explanation: Choose indices (1, 2, 2) and nums becomes [3,1,0,2].

// Example 3:
// Input: nums = [2,-3,-1,5,-4], k = 2
// Output: 13
// Explanation: Choose indices (1, 4) and nums becomes [2,3,-1,5,4].

// Constraints:
// 1 <= nums.length <= 10^4
// -100 <= nums[i] <= 100
// 1 <= k <= 10^4




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int totalSum(vector<int> nums) {
    int sum = 0;
    for ( int val : nums ) {
        sum += val;
    }
    return sum;
}

int largestSumAfterKNegations(vector<int>& nums, int k) {

    if (nums.size() == 1 ) {
        if ( k % 2 == 0 ) {
            return nums[0];
        } else {
            return -nums[0];
        }
    }

    sort(nums.begin(),nums.end());

    if ( nums[0] >= 0 ) {
        if ( k % 2 == 0 ) {
            return totalSum(nums);
        } else {
            nums[0] = -nums[0];
            return totalSum(nums);
        }
    }

    for ( int i = 0; i<nums.size(); i++ ) {
        if ( nums[i] < 0 ) {
            nums[i] = -nums[i];
            k--;
            if ( k == 0 ) {
                return totalSum(nums);
            }
        } else {
            if ( k % 2 == 0 ) {
                return totalSum(nums);
            }

            if ( nums[i] < nums[i-1] ) {
                nums[i] = -nums[i];
            } else {
                nums[i-1] = -nums[i-1];
            }
            
            return totalSum(nums);
        }
    }

    if ( k % 2 == 0 ) {
        return totalSum(nums);
    }

    nums[nums.size()-1] = -nums[nums.size()-1];
    
    
    return totalSum(nums);

    
}


int main() {
    vector<int> nums = {2,-3,-1,5,-4};
    int k = 2;
    cout << largestSumAfterKNegations(nums,k);
    return 0;
}



// Approach : Traversal

// Solution Core : Firstly we will check if there is a single element in the nums then, we will check if the k is even
// simply return the value of nums, if odd alter the sign and return it. 

// If this is not the case, then simply sort the given array, check for the first value if it is +ve ( i.e every element 
// in the array is positive ) then again check if the k is even simply return the sum value of nums, 
// if odd alter the sign of first value and return it's sum;

// If this it contains the negative number as well, then keep altering the sign of the value until we encounter the +ve
// value, after we find the +ve value check which element is smallar is it current one or the previous and then do the 
// same for the sign according to the remaining k value.

// If all the element in the given array is -ve then, check if the remaining k is even or odd, if even return the sum,
// if odd return the sum after altering the last index sign.

// Time Complexity : O(nlogn) ; n = nums.size()
// Space Complexity : O(1)