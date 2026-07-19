
// 392. Is Subsequence  |  Platform : LeetCode


// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of 
// the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence 
// of "abcde" while "aec" is not).
 

// Example 1:
// Input: s = "abc", t = "ahbgdc"
// Output: true

// Example 2:
// Input: s = "axc", t = "ahbgdc"
// Output: false
 

// Constraints:
// 0 <= s.length <= 100
// 0 <= t.length <= 10^4
// s and t consist only of lowercase English letters.




#include<iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int start = 0;
    if ( s.length() == 0 ) {
        return true;
    }
    for ( char c : t ) {
        if ( c == s[start] ) {
            start++;
        }
        if ( start == s.length() ) {
            return true;
        }
    }
    return false;
}

int main() {
    string s = "axc", t = "ahbgdc";
    cout << isSubsequence(s,t);
    return 0;
}