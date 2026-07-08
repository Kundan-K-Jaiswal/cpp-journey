
// 3861. Minimum Capacity Box |  Platform : LeetCode

// You are given an integer array capacity, where capacity[i] represents the capacity of the ith box, and an integer 
// itemSize representing the size of an item.
// The ith box can store the item if capacity[i] >= itemSize.
// Return an integer denoting the index of the box with the minimum capacity that can store the item. 
// If multiple such boxes exist, return the smallest index.
// If no box can store the item, return -1.
 
// Example 1:
// Input: capacity = [1,5,3,7], itemSize = 3
// Output: 2
// Explanation:
// The box at index 2 has a capacity of 3, which is the minimum capacity that can store the item. Thus, the answer is 2.

// Example 2:
// Input: capacity = [3,5,4,3], itemSize = 2
// Output: 0
// Explanation:
// The minimum capacity that can store the item is 3, and it appears at indices 0 and 3. Thus, the answer is 0.

// Example 3:
// Input: capacity = [4], itemSize = 5
// Output: -1
// Explanation:
// No box has enough capacity to store the item, so the answer is -1.

// Constraints:
// 1 <= capacity.length <= 100
// 1 <= capacity[i] <= 100
// 1 <= itemSize <= 100





#include<iostream>
#include<vector>
using namespace std;

int minimumIndex(vector<int>& capacity, int itemSize) {
    int minIndex = -1, lastBox = INT16_MAX;
    for ( int i = 0; i<capacity.size(); i++ ) {
        if ( itemSize == capacity[i] ) {
            return i;
        } else if ( capacity[i] > itemSize ) {
            if ( lastBox > capacity[i] ) {
                lastBox = capacity[i];
                minIndex = i;
            }
        }
    }
    return minIndex;
}


int main() {
    vector<int> capacity = {3,5,4,3};
    int itemSize = 2;
    cout << minimumIndex(capacity,itemSize);
    return 0;
}



// Approach : Two pointer

// Solution Core : We will begin by checking from the first index, if the as soon as we find a capacity exact same to
// the item size return its index if not check if the size of current capicity is less then previous data stored in a 
// container and then update accordingly.

// Time Complexity : O(n) ; n = capacity.size()
// Space Complexity : O(n) ; n = nums.size()