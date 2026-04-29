
// 278. First Bad Version | Platform : LeetCode  

// You are a product manager and currently leading a team to develop a new product. 
// Unfortunately, the latest version of your product fails the quality check. 
// Since each version is developed based on the previous version, 
// all the versions after a bad version are also bad.

// Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, 
//which causes all the following ones to be bad.

// You are given an API bool isBadVersion(version) which returns whether version is bad. 
// Implement a function to find the first bad version. You should minimize the number of calls to the API.

// Example 1:
// Input: n = 5, bad = 4
// Output: 4
// Explanation:
// call isBadVersion(3) -> false
// call isBadVersion(5) -> true
// call isBadVersion(4) -> true
// Then 4 is the first bad version.

// Example 2:
// Input: n = 1, bad = 1
// Output: 1

// Constraints:
// 1 <= bad <= n <= 2^31 - 1




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isBadVersion(int n) { // this is inbuilt function in the leetcode for this question.
    if ( n == 4 ) return true; // specifically for this question
    return false;
}

int firstBadVersion(int n) {
        int st = 1, end = n;
        int ans;
        while(st<=end) {
            int mid = st + ( end - st ) / 2;
            if (isBadVersion(mid)) {
                end = mid - 1;
                ans = mid;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }

int main() {
    int nums = 5; // bad = 4
    cout << firstBadVersion(nums);
    return 0;
}



// Approach : Binary Search

// Solution Core : Use the binary search approach and call the function for each mid value and update
// accordingly.

// Time Complexity : O(logn)
// Space Complexity : O(1)