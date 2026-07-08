
// 118. Pascal's Triangle  |  Platform : LeetCode

// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

//                 1
//             1       1
//         1       2       1
//     1       3       3       1
// 1       4       6       4       1
 
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
    vector<vector<int>> result = generate(numRows);
    for ( auto p : result ) {
        cout << "[ ";
        for ( int v : p ) {
            cout << v << " ";
        }
        cout << "] ";
    }
    return 0;
}

