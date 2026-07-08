
// 3745. Maximize Expression of Three Elements   |  Platform : LeetCode

// You are given an integer array nums.
// Choose three elements a, b, and c from nums at distinct indices such that the value of the expression a + b - c is
//  maximized.
// Return an integer denoting the maximum possible value of this expression.

// Example 1:
// Input: nums = [1,4,2,5]
// Output: 8
// Explanation:
// We can choose a = 4, b = 5, and c = 1. The expression value is 4 + 5 - 1 = 8, which is the maximum possible.

// Example 2:
// Input: nums = [-2,0,5,-2,4]
// Output: 11
// Explanation:
// We can choose a = 5, b = 4, and c = -2. The expression value is 5 + 4 - (-2) = 11, which is the maximum possible.

// Constraints:
// 3 <= nums.length <= 100
// -100 <= nums[i] <= 100





#include<iostream>
#include<vector>
using namespace std;

int maximizeExpressionOfThree(vector<int>& nums) {

    int a = INT16_MIN, b = INT16_MIN , c = INT16_MAX;

    for ( int val : nums ) {

        if ( val > a ) { // for largest element
            b = a;
            a = val;
        } else { // for second largest element
            if ( val > b ) {
                b = val;
            }
        }

        if ( val < c ) { // for smallest element
            c = val;
        }
    }

    return (a + b - c);
}


int main() {
    vector<int> nums = {-2,0,5,-2,4};
    cout << maximizeExpressionOfThree(nums);
    return 0;
}

