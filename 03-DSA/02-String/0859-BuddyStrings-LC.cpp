
// 859. Buddy Strings  |  Platform : LeetCode


// Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, 
// return false.
// Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at 
// s[i] and s[j].
// For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
 

// Example 1:
// Input: s = "ab", goal = "ba"
// Output: true
// Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

// Example 2:
// Input: s = "ab", goal = "ab"
// Output: false
// Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.


// Example 3:
// Input: s = "aa", goal = "aa"
// Output: true
// Explanation: You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.
 

// Constraints:
// 1 <= s.length, goal.length <= 2 * 10^4
// s and goal consist of lowercase letters.




#include<iostream>
#include<unordered_map>
using namespace std;

bool buddyStrings(string s, string goal) {
    if ( s == goal ) {
        unordered_map<char,int> freq;
        for ( char ch : s ) freq[ch]++;
        for ( auto p : freq ) {
            if ( p.second >= 2 ) return true;
        }
        return false;
    } else {
        int pos = -1;
        for ( int i = 0; i<s.length(); i++ ) {
            if ( s[i] != goal[i] && pos == -1 ) {
                pos = i;
            } else if ( s[i] != goal[i] ) {
                swap(s[pos],s[i]);
                if ( s == goal ) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }
    return true;
}

int main() {
    string s = "aa", goal = "aa";
    cout << buddyStrings(s, goal);
    return 0;
}