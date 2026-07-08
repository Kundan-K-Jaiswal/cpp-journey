
// 3678. Smallest Absent Positive Greater Than Average    |  Platform : LeetCode

// You are given an integer array nums.
// Return the smallest absent positive integer in nums such that it is strictly greater than the average of all
//  elements in nums.
// The average of an array is defined as the sum of all its elements divided by the number of elements.
 
// Example 1:
// Input: nums = [3,5]
// Output: 6
// Explanation:
// The average of nums is (3 + 5) / 2 = 8 / 2 = 4.
// The smallest absent positive integer greater than 4 is 6.

// Example 2:
// Input: nums = [-1,1,2]
// Output: 3
// Explanation:
// ​​​​​​​The average of nums is (-1 + 1 + 2) / 3 = 2 / 3 = 0.667.
// The smallest absent positive integer greater than 0.667 is 3.

// Example 3:
// Input: nums = [4,-1]
// Output: 2
// Explanation:
// The average of nums is (4 + (-1)) / 2 = 3 / 2 = 1.50.
// The smallest absent positive integer greater than 1.50 is 2.
 
// Constraints:
// 1 <= nums.length <= 100
// -100 <= nums[i] <= 100​​​​​​​




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallestAbsent(vector<int>& nums) {
    int avg = 0, n = nums.size();
    for ( int val : nums ) {
        avg += val;
    }
    avg /= n;

    sort(nums.begin(), nums.end());
    int ans;
    if ( avg < 0 ) {
        ans = 1;
    } else {
        ans = avg+1;
    }

    for ( int val: nums ) {
        if ( val > ans ) {
            return ans;
        }
        if (val==ans) {
            ans++;
        }
    }
    return ans;   
}


int main() {
    vector<int> nums = {-1,1,2};
    cout << smallestAbsent(nums);
    return 0;
}