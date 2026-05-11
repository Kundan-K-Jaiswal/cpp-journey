// 118. Pascal's Triangle | Platform : LeetCode

// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// ________1
// _______1_1
// ______1_2_1
// _____1_3_3_1
// ____1_4_6_4_1

// Example 1:
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

// Example 2:
// Input: numRows = 1
// Output: [[1]]

// Constraints:
// 1 <= numRows <= 30


#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans = {{1}};
    for ( int i = 0; i<numRows-1; i++ ) {
        int st = 0, adj = 1;
        vector<int> newRow = {1};
        while ( adj <= ans[i].size()-1 ) {
            newRow.push_back((ans[i][st++] + ans[i][adj++]));
        }
        newRow.push_back(1);
        ans.push_back(newRow);
    }
    return ans;
}

int main() {
    int numRows = 5;
    vector<vector<int>> ans = generate(numRows);
    for ( vector<int> vec : ans ) {
        for ( int val : vec ) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}




// Approach : Sliding window of size 2 over previous row

// Solution Core : We will start with a vector containing first row. Now, we we execute a loop to get n number of rows
// in the triangle. Inside this loop we will built values for our new row by taking previous row and adding 
// adjecent values, at end we will wrap it up with a extra one.

// Time Complexity : O(n^2)
// Space Complexity : O(n^2)