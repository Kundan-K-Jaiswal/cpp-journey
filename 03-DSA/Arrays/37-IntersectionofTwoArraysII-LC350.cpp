
// 350. Intersection of Two Arrays II  |  Platform : LeetCode

// Given two integer arrays nums1 and nums2, return an array of their intersection. 
// Each element in the result must appear as many times as it shows in both arrays and you may 
// return the result in any order.

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]

// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.

// Constraints:
// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000

// Follow up:
// What if the given array is already sorted? How would you optimize your algorithm?
// What if nums1's size is small compared to nums2's size? Which algorithm is better?
// What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load 
// all elements into the memory at once?





#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int>ans;

    int start1 = 0, start2=0; 
    int size1 = nums1.size(), size2 = nums2.size();

    while ( start1 < size1 && start2 < size2 ) {
        if (nums1[start1] == nums2[start2]) {
            ans.push_back(nums1[start1]);
            start1++;
            start2++;
        } else if ( nums1[start1] > nums2[start2] ) {
            start2++;
        } else {
            start1++;
        }
    }
    
    return ans;
}

int main() {
    vector<int> nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
    vector<int> result =  intersect(nums1,nums2);
    cout << "[ "; 
    for ( int val : result ) {
        cout << val << " " ;
    }
    cout << "]";
    return 0;
}



// Approach : Two Pointer

// Solution Core : Sort the given array, after that we will create two variables (s1 & s2 ) that will keep the track of the
// indices of the array, now we will check if the val at s1 of nums1 is equal to that of s2 of nums2 then add that element
// in the result array, if value at s1 is greater move s2 and vise versa 

// Time Complexity : O(nlog(n)) i.e n -> min ( nums1.size(), nums2.size() )
// Space Complexity : O(m) i.e -> m = ans.size()