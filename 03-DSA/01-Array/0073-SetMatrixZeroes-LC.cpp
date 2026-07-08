
// 73. Set Matrix Zeroes  |  Platform : LeetCode

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

// Example 1:
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Example 2:
// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 
// Constraints:
// m == matrix.length
// n == matrix[0].length
// 1 <= m, n <= 200
// -2^31 <= matrix[i][j] <= 2^31 - 1




#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rowSize = matrix.size(), colSize = matrix[0].size();
    vector<bool> rowZero(rowSize,false), colZero(colSize,false);

    for ( int i = 0; i<rowSize; i++ ) {
        for ( int j = 0; j<colSize; j++ ) {
            if ( matrix[i][j] == 0 ) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }
    

    for ( int i = 0; i<rowSize; i++ ) {

        if ( rowZero[i] ) {
            for ( int& val : matrix[i] ) {
                val = 0;
            }
        } else {
            for ( int j = 0; j<colSize; j++ ) {
                if ( colZero[j] ) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);
    for ( auto v : matrix ) {
        cout << "[ ";
        for ( int val : v ) {
            cout << val << " ";
        }
        cout<< "] ";
    }
    return 0;
}