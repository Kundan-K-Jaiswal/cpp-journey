
// 20. Valid Parentheses  |  Platform : LeetCode


// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:
// Input: s = "()"
// Output: true


// Example 2:
// Input: s = "()[]{}"
// Output: true


// Example 3:
// Input: s = "(]"
// Output: false


// Example 4:
// Input: s = "([])"
// Output: true


// Example 5:
// Input: s = "([)]"
// Output: false

 
// Constraints:
// 1 <= s.length <= 10^4
// s consists of parentheses only '()[]{}'.




#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isValid(string s) {
        vector<char> brackets;
    for ( char ch : s ) {
        if ( ch == '(' ) {
            brackets.push_back(')');
        } else if ( ch == '{' ) {
            brackets.push_back('}');
        } else if ( ch == '[' ) {
            brackets.push_back(']');
        } else if ( brackets.size() == 0 ) {
            return false;
        } else if ( ch != brackets.back() ) {
            return false;
        } else if ( ch == brackets.back() ) {
            brackets.pop_back();
        }
    }
    if ( brackets.size() != 0 ) {
        return false;
    }
    return true;
}

int main() {
    string s = "([)]";
    cout << isValid(s);
    return 0;
}