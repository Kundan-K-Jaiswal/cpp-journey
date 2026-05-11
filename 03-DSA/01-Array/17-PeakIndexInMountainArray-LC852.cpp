// 852. Peak Index in a Mountain Array | Platform : LeetCode

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.

// Example 1:
// Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1

// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1

// Constraints:
// 3 <= arr.length <= 10^5
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.



#include<iostream>
#include<vector> 
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0, end = arr.size()-1;
    while ( start <= end ) {
        int mid = start + (end - start)/2;
        if ( arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1] ) { // arr is guaranteed to be a mountain array. ( no need to worry about the index )
            return mid;
        } else if ( arr[mid] < arr[mid+1] ) {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
}

int main() {
    vector<int> arr = {0,10,5,2};
    cout << peakIndexInMountainArray(arr);
    return 0;
}



// Approach : Binary Search

// Solution Core : We will calculate the mid point and check if the element at mid is greater than both the adjecent 
// side if yes then our ans is mid, else check if the elements are still increasing, if so update search space to 
// right else to the left.

// Time Complexity : O(log n)
// Space Complexity : O(1)