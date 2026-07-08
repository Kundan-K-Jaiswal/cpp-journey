
// 941. Valid Mountain Array  |  Platform : LeetCode

// Given an array of integers arr, return true if and only if it is a valid mountain array.

// Recall that arr is a mountain array if and only if:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

// Example 1:
// Input: arr = [2,1]
// Output: false

// Example 2:
// Input: arr = [3,5,5]
// Output: false

// Example 3:
// Input: arr = [0,3,2,1]
// Output: true
 
// Constraints:
// 1 <= arr.length <= 10^4
// 0 <= arr[i] <= 10^4




#include<iostream>
#include<vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {

    int sz = arr.size();

    if ( sz < 3 ) {
        return false; 
    }

    if ( arr[0] > arr[1] ) {
        return false;
    }
    
    bool isDec = false;
    for ( int i = 0; i<sz-1; i++ ) {
        if ( !isDec ) {
            if ( arr[i] == arr[i+1]) {
                return false;
            } else if ( arr[i] > arr[i+1]) {
                isDec = true;
            }
        } else {
            if ( arr[i] == arr[i+1] ) {
                return false;
            } else if ( arr[i] < arr[i+1] ) {
                return false;
            }
        }
        
    }
    
    if ( isDec ) {
        return true;
    } else {
        return false;
    }
    
}


int main() {
    vector<int> arr = {0,3,2,1};
    cout << validMountainArray(arr);
    return 0;
}



// Approach : Traversal With Condition

// Solution Core : Firstly we will check if the array is strictly increasing or not, once we encounter a less value,
// we will start checking if the remaining array is strictly decreasing or not, if not return false else true.

// Time Complexity : O(n)
// Space Complexity : O(1)