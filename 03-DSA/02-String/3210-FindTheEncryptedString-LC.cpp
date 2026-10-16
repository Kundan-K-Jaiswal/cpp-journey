
// 3210. Find the Encrypted String  |  Platform : LeetCode


// You are given a string s and an integer k. Encrypt the string using the following algorithm:
// For each character c in s, replace c with the kth character after c in the string (in a cyclic manner).
// Return the encrypted string.

 
// Example 1:
// Input: s = "dart", k = 3
// Output: "tdar"

// Explanation:
// For i = 0, the 3rd character after 'd' is 't'.
// For i = 1, the 3rd character after 'a' is 'd'.
// For i = 2, the 3rd character after 'r' is 'a'.
// For i = 3, the 3rd character after 't' is 'r'.


// Example 2:
// Input: s = "aaa", k = 1
// Output: "aaa"

// Explanation:
// As all the characters are the same, the encrypted string will also be the same.


// Constraints:
// 1 <= s.length <= 100
// 1 <= k <= 104
// s consists only of lowercase English letters.




#include<iostream>
#include<string>
using namespace std;

string getEncryptedString(string s, int k) {
    string ans = "";
    for ( int i = 0; i < s.length(); i++ ) {
        int v = i + k;
        if ( v >= s.length() ) {
            v = v % s.length();
        }
        ans += s[v];
    }
    return ans;
}

int main() {
    string s = "dart";
    int k = 3;
    cout << getEncryptedString(s,k);
    return 0;
}