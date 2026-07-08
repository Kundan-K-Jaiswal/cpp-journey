
// 2027. Minimum Moves to Convert String |  Platform : LeetCode

// You are given a string s consisting of n characters which are either 'X' or 'O'.
// A move is defined as selecting three consecutive characters of s and converting them to 'O'. 
// Note that if a move is applied to the character 'O', it will stay the same.
// Return the minimum number of moves required so that all the characters of s are converted to 'O'.

// Example 1:
// Input: s = "XXX"
// Output: 1
// Explanation: XXX -> OOO
// We select all the 3 characters and convert them in one move.

// Example 2:
// Input: s = "XXOX"
// Output: 2
// Explanation: XXOX -> OOOX -> OOOO
// We select the first 3 characters in the first move, and convert them to 'O'.
// Then we select the last 3 characters and convert them so that the final string contains all 'O's.

// Example 3:
// Input: s = "OOOO"
// Output: 0
// Explanation: There are no 'X's in s to convert.
 
// Constraints:
// 3 <= s.length <= 1000
// s[i] is either 'X' or 'O'.




#include<iostream>
#include<string>
using namespace std;

int minimumMoves(string s) {
    int res = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        if ( s[i] == 'X' ) {
            res++;
            i += 2;
        }
    }
    return res;
}


int main() {
    string s = "OXOXOXOXOX";
    cout << minimumMoves(s);
    return 0;
}



// Approach : Traversal

// Solution Core : Traverse through the characters of the string if we encounter any X then update the result count and
// move to three index ahead ( because we can change any existing x within its range in a single step ). Repeat the 
// process until we are out of the bound.

// Time Complexity : O(n) ; n = s.length()
// Space Complexity : O(1)