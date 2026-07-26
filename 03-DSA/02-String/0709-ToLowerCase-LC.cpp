
// 709. To Lower Case  |  Platform : LeetCode


// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
 

// Example 1:
// Input: s = "Hello"
// Output: "hello"

// Example 2:
// Input: s = "here"
// Output: "here"

// Example 3:
// Input: s = "LOVELY"
// Output: "lovely"
 

// Constraints:
// 1 <= s.length <= 100
// s consists of printable ASCII characters.




#include<iostream>
using namespace std;

string toLowerCase(string s) {
    for ( char& c : s ) {
        if ( c >= 'A' && c <= 'Z' ) {
            c += 32;
        }
    }
    return s;
}

int main() {
    string s = "Hello";
    cout << toLowerCase(s);
    return 0;
}
