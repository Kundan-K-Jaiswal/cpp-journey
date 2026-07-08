
// 867. Transpose Matrix  |  Platform : LeetCode

// Given a 2D integer array matrix, return the transpose of matrix.
// The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]

// Example 2:
// Input: matrix = [[1,2,3],[4,5,6]]
// Output: [[1,4],[2,5],[3,6]]
 
// Constraints:
// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 1000
// 1 <= m * n <= 10^5
// -10^9 <= matrix[i][j] <= 10^9




#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> ans ( n, vector<int>(m,0));
    for ( int i = 0; i<m; i++ ) {
        for ( int j = 0 ; j<n; j++ ) {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}


int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> result = transpose(matrix);
    cout << "[ ";
    for ( auto row : result ) {
        cout << "[ ";
        for ( auto val : row ) {
            cout << val << " ";
        }
        cout << "] ";
    }
    cout << "] ";
    return 0;
}



// Approach : Mathematical Logic

// Solution Core : We will create a another matrix of same size but the no. of row & colums are reversed. Now we will 
// traverse through the matrix and store the value at i , j to result at j , i.

// Time Complexity : O(m*n) -> m = no. of rows, n = no. of columns 
// Space Complexity : O(m*n) -> m = no. of rows, n = no. of columns 