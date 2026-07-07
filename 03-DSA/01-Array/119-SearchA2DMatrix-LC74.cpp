
// 74. Search a 2D Matrix  |  Platform : LeetCode

// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 
// Constraints:
// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -10^4 <= matrix[i][j], target <= 10^4




#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    if ( target < matrix[0][0] || target > matrix[rows-1][cols-1] ) {
        return false;
    }

    int i = 0;
    int start = 0, end = rows-1;
    while( start <= end ) { // to select the row
        int mid = start + (end - start)/2;
        if ( matrix[mid][cols-1] == target ) {
            return true;
        } else if ( matrix[mid][cols-1] > target ) {
            i = mid;
            end = mid -1;
        } else {
            start = mid + 1;
        }
    }


    start = 0, end = cols-1;
    while (start <= end ) { // to find the target in selected row
        int mid = start + (end - start)/2;
        if ( matrix[i][mid] == target ) {
            return true;
        } else if ( matrix[i][mid] > target ) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 13;
    cout << searchMatrix(matrix, target);
    return 0;
}