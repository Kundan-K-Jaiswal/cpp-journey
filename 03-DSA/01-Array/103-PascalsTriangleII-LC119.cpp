
// 119. Pascal's Triangle II  |  Platform : LeetCode

// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
//                 1
//             1       1
//         1       2       1
//     1       3       3       1
// 1       4       6       4       1

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




#include<iostream>
#include<vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> lastRow = {1};
    for ( int i = 0; i<rowIndex; i++ ) {
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
    int rowIndex = 3;
    vector<int> result = getRow(rowIndex);
    for ( int val : result ) {
        cout << val << " ";
    }
    return 0;
}