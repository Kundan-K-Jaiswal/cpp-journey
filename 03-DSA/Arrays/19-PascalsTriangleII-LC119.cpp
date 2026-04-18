// 119. Pascal's Triangle II | Platform : LeetCode

// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// ________1
// _______1_1
// ______1_2_1
// _____1_3_3_1
// ____1_4_6_4_1

// Example 1:
// Input: rowIndex = 3
// Output: [1,3,3,1]

// Example 2:
// Input: rowIndex = 0
// Output: [1]

// Example 3:
// Input: rowIndex = 1
// Output: [1,1]


// Constraints:
// 0 <= rowIndex <= 33
 
// Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?



#include<iostream>
#include<vector>
using namespace std;

vector<int> generate(int numRows) {
    vector<int> lastRow = {1};
    for ( int i = 0; i<numRows; i++ ) {
        int st = 0, adj = 1;
        vector<int> newRow = {1};
        while ( adj <= lastRow.size()-1 ) {
            newRow.push_back(lastRow[st++] + lastRow[adj++]);
        }
        newRow.push_back(1);
        lastRow = newRow;
    }
    return lastRow;
}

int main() {
    int numRows = 3;
    vector<int> ans = generate(numRows);
    for ( int val : ans ) {
        cout << val << " ";
    }
    return 0;
}




// Approach : Sliding window of size 2 over previous row

// Solution Core : We will start with a vector containing first row. Now, we we execute a loop to get n number of rows
// in the triangle. Inside this loop we will built values for our new row by taking previous row and adding 
// adjecent values, at end we will wrap it up with a extra one.

// Time Complexity : O(n^2)
// Space Complexity : O(n^2)