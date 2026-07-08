
// 347. Top K Frequent Elements  |  Platform : LeetCode

// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Example 1:
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

// Example 2:
// Input: nums = [1], k = 1
// Output: [1]

// Example 3:
// Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
// Output: [1,2]

// Constraints:

// 1 <= nums.length <= 10^5
// -10^4 <= nums[i] <= 10^4
// k is in the range [1, the number of unique elements in the array].
// It is guaranteed that the answer is unique.




#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> result;
    unordered_map<int,int> freq;

    for ( int ele : nums ) {
        freq[ele]++;
    }

    vector<pair<int,int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end(), [](auto &p1, auto &p2){
        return p1.second > p2.second;
    });

    for ( auto val : vec ) {
        if ( k == 0 ) break;
        result.push_back(val.first);
        k--;
    }
    
    return result;
}

int main() {
    vector<int> nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    vector<int> result = topKFrequent(nums,k);
    for ( int val : result ) {
        cout << val << " ";
    }
    return 0;
}