
// 228. Summary Ranges | Platform : LeetCode  

// You are given a sorted unique integer array nums.
// A range [a,b] is the set of all integers from a to b (inclusive).
// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. 
// That is, each element of nums is covered by exactly one of the ranges, 
// and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:
// "a->b" if a != b
// "a" if a == b

// Example 1:
// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]
// Explanation: The ranges are:
// [0,2] --> "0->2"
// [4,5] --> "4->5"
// [7,7] --> "7"

// Example 2:
// Input: nums = [0,2,3,4,6,8,9]
// Output: ["0","2->4","6","8->9"]
// Explanation: The ranges are:
// [0,0] --> "0"
// [2,4] --> "2->4"
// [6,6] --> "6"
// [8,9] --> "8->9"

// Constraints:
// 0 <= nums.length <= 20
// -2^31 <= nums[i] <= 2^31 - 1
// All the values of nums are unique.
// nums is sorted in ascending order.




#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {

    vector<string> ans;
    bool isInitial = false;
    int initial;

    for (int i=0; i<nums.size(); i++ ) {
        if ( isInitial ) {
            if ( i == nums.size()-1 ) {
                string s = to_string(initial) + "->" + to_string(nums[i]);
                ans.push_back(s);
                return ans;
            }
            if ( nums[i]+1 != nums[i+1] ) {
                string s = to_string(initial) + "->" + to_string(nums[i]);
                ans.push_back(s);
                isInitial = false;
            }
        } else {
            if ( i == nums.size()-1 ) {  
                string s = to_string(nums[i]);
                ans.push_back(s);
                return ans;
            }
            if ( nums[i]+1 == nums[i+1] ) {
                isInitial = true;
                initial = nums[i];
            } else {
                string s = to_string(nums[i]);
                ans.push_back(s);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {0,2,3,4,6,8,9};
    vector<string> ans = summaryRanges(nums);
    cout  << "[  "; 
    for ( string val : ans ) {
        cout << "`" << val << "`  " ;
    }
    cout << "]";
    return 0;
}



// Approach : Traverse through the array

// Solution Core : Firstly we will find if the current index and next index element are actually an adjecent 
// elements or not if not we will push that ( for those whose both previous and next element doesnot match),
// if yes we will store the initial element and keep checking until we find the missing value then we will 
// push a string with the initial the last element that was continuous.

// Time Complexity : O(n)
// Space Complexity : O(n)