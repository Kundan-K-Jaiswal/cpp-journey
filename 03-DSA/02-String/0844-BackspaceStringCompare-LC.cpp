
// 844. Backspace String Compare  |  Platform : LeetCode


// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a 
// backspace character.
// Note that after backspacing an empty text, the text will continue empty.


// Example 1:
// Input: s = "ab#c", t = "ad#c"
// Output: true
// Explanation: Both s and t become "ac".


// Example 2:
// Input: s = "ab##", t = "c#d#"
// Output: true
// Explanation: Both s and t become "".


// Example 3:
// Input: s = "a#c", t = "b"
// Output: false
// Explanation: s becomes "c" while t becomes "b".
 

// Constraints:
// 1 <= s.length, t.length <= 200
// s and t only contain lowercase letters and '#' characters.




#include<iostream>
using namespace std;

bool backspaceCompare(string s, string t) {
    string s1 = "";
    for ( char ch : s ) {
        if ( ch == '#' && !s1.empty() ) {
            s1.pop_back();
        } else if ( ch != '#' ) {
            s1.push_back(ch);
        }
    }

    string t1 = "";
    for ( char ch : t ) {
        if ( ch == '#' && !t1.empty() ) {
            t1.pop_back();
        } else if ( ch != '#' ) {
            t1.push_back(ch);
        }
    }
    return s1 == t1;
}

int main() {
    string s = "a#c", t = "b";
    cout << backspaceCompare(s,t);
    return 0;
}