
// 349. Intersection of Two Arrays | Platform : LeetCode 

// Given two integer arrays nums1 and nums2, return an array of their intersection. 
// Each element in the result must be unique and you may return the result in any order.

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

// Constraints:
// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> check(vector<int> small, vector<int> big) {
    vector<int> ans;
    for ( int i=0; i<small.size(); i++ ) {
        if ( i < small.size()-1) {
            if ( small[i+1] == small[i] ) {
                continue;
            }
        }
        
        bool isAns = true;
        for ( int j=0; j<big.size(); j++) {
            if (small[i] == big[j]) {
                if(isAns) {
                    ans.push_back(small[i]);
                    isAns = false;
                }
            }
        } 
    }
    return ans;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size();
    if ( m < n ) {
        sort(nums1.begin(),nums1.end());
        return check(nums1,nums2);
    }
    sort(nums2.begin(),nums2.end());
    return check(nums2,nums1);
}

int main() {
    vector<int> nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
    vector<int> ans = intersection(nums1,nums2);
    cout << "[ "; 
    for ( int val : ans ) {
        cout << val << " " ;
    }
    cout << "]";
    return 0;
}



// Approach : Brute Force

// Solution Core : Sort one of the vector and then for each unique element in it check for the same in another 
// vector if found add into the answer vector.

// Time Complexity : O(m*n)
// Space Complexity : O(1)