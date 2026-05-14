
// 999. Available Captures for Rook  |  Platform : LeetCode

// You are given an 8 x 8 matrix representing a chessboard. There is exactly one white rook represented by 'R', 
// some number of white bishops 'B', and some number of black pawns 'p'. Empty squares are represented by '.'.
// A rook can move any number of squares horizontally or vertically (up, down, left, right) until it reaches another 
// piece or the edge of the board. A rook is attacking a pawn if it can move to the pawn's square in one move.
// Note: A rook cannot move through other pieces, such as bishops or pawns. This means a rook cannot attack a pawn if 
// there is another piece blocking the path.

// Return the number of pawns the white rook is attacking.

// Example 1:
// Input: board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","R",".",".",".","p"]
// ,[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],
// [".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]]
// Output: 3
// Explanation:
// In this example, the rook is attacking all the pawns.

// Example 2:
// Input: board = [[".",".",".",".",".",".","."],[".","p","p","p","p","p",".","."],[".","p","p","B","p","p",".","."],
// [".","p","B","R","B","p",".","."],[".","p","p","B","p","p",".","."],[".","p","p","p","p","p",".","."],
// [".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]]
// Output: 0
// Explanation:
// The bishops are blocking the rook from attacking any of the pawns.

// Example 3:
// Input: board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","p",".",".",".","."],
// ["p","p",".","R",".","p","B","."],[".",".",".",".",".",".",".","."],[".",".",".","B",".",".",".","."],
// [".",".",".","p",".",".",".","."],[".",".",".",".",".",".",".","."]]
// Output: 3
// Explanation:
// The rook is attacking the pawns at positions b5, d6, and f5.

// Constraints:
// board.length == 8
// board[i].length == 8
// board[i][j] is either 'R', '.', 'B', or 'p'
// There is exactly one cell with board[i][j] == 'R'




#include<iostream>
#include<vector>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int row, col, attack = 0;
    for( int i =0; i<board.size(); i++ ) {
        for ( int j = 0; j<8; j++ ) {
            if (board[i][j] == 'R') {
                row = i;
                col = j;
                break;
            }
        }
    }

    // check in same row 
    // check left 
    for ( int i = col; i>=0; i-- ) {
        if ( board[row][i] == 'B' ) {
            break;
        } else if (board[row][i] == 'p' ) {
            attack++;
            break;
        }
    }

    // right check
    for ( int i = col; i<8; i++ ) {
        if ( board[row][i] == 'B' ) {
            break;
        } else if (board[row][i] == 'p' ) {
            attack++;
            break;
        }
    }


    // check in same col
    // check up 
    for ( int i = row-1; i>=0; i-- ) {
        if ( board[i][col] == 'B' ) {
            break;
        } else if (board[i][col] == 'p' ) {
            attack++;
            break;
        }
    }

    // check down
    for ( int i = row+1; i<8; i++ ) {
        if ( board[i][col] == 'B' ) {
            break;
        } else if (board[i][col] == 'p' ) {
            attack++;
            break;
        }
    }

    return attack;
}


int main() {
    vector<vector<char>> board = {  {'.','.','.','.','.','.','.','.'},
                                    {'.','.','.','p','.','.','.','.'},
                                    {'.','.','.','p','.','.','.','.'},
                                    {'p','p','.','R','.','p','B','.'},
                                    {'.','.','.','.','.','.','.','.'},
                                    {'.','.','.','B','.','.','.','.'},
                                    {'.','.','.','p','.','.','.','.'},
                                    {'.','.','.','.','.','.','.','.'}   };
    cout << numRookCaptures(board);
    return 0;
}



// Approach : Traversal

// Solution Core : Firstly we will locate the rook and then check for the entire row and column where the rook is present
// and if we encounter a Pawn we will increase the count.

// Time Complexity : O(1)
// Space Complexity : O(1)