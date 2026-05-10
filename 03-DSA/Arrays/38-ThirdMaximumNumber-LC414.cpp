
// 414. Third Maximum Number  |  Platform : LeetCode

// Given an integer array nums, return the third distinct maximum number in this array. 
// If the third maximum does not exist, return the maximum number.

// Example 1:
// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.

// Example 2:
// Input: nums = [1,2]
// Output: 2
// Explanation:
// The first distinct maximum is 2.
// The second distinct maximum is 1.
// The third distinct maximum does not exist, so the maximum (2) is returned instead.

// Example 3:
// Input: nums = [2,2,3,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2 (both 2's are counted together since they have the same value).
// The third distinct maximum is 1.

// Constraints:
// 1 <= nums.length <= 10^4
// -2^31 <= nums[i] <= 2^31 - 1

// Follow up: Can you find an O(n) solution?






#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {

    sort(nums.rbegin(),nums.rend()); // descending order sort

    int largest=nums[0], count = 0;
    
    int i = 0;
    for (i ; i<nums.size()-1; i++ ) {
        if (count == 3) {
            return largest;
        } else if ( nums[i] != nums[i+1] ) {
            largest = nums[i];
            count++;
        }
    }
    if ( count == 3 ) { // if we already got third largest at end
        return largest;
    } else if ( nums[i] != largest && count == 2 ) { // to track for the last index element
        return nums[i];
    }

    return nums[0]; // in case there is no 3rd largest element
}

int main() {
    vector<int> nums = {2,2,3,1};
    cout << thirdMax(nums);
    return 0;
}



// Approach : Sort & Traverse

// Solution Core : We will sort the given array in decending order, now we will create a count variable that will 
// store the count of the no. of distinct largest values, if the current element is not equal to the next element means the 
// the next element is distinct so increase the count value by 1, check if count is equal to 3 then return that element.

// Time Complexity : O(nlog(n)) 
// Space Complexity : O(1)