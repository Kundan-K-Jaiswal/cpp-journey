
// 3090. Maximum Length Substring With Two Occurrences  |  Platform : LeetCode


// Given a string s, return the maximum length of a substring such that it contains at most two occurrences of each 
// character.
 

// Example 1:
// Input: s = "bcbbbcba"
// Output: 4
// Explanation:
// The following substring has a length of 4 and contains at most two occurrences of each character: "bcbbbcba".


// Example 2:
// Input: s = "aaaa"
// Output: 2
// Explanation:
// The following substring has a length of 2 and contains at most two occurrences of each character: "aaaa".
 

// Constraints:
// 2 <= s.length <= 100
// s consists only of lowercase English letters.




#include<iostream>
#include<vector>
using namespace std;

int maximumLengthSubstring(string s) {
    int mxLen = 2;
    for ( int i = 0; i < s.length(); i++ ) {
        vector<int> alphabet (27,2);
        int j = i;
        for ( j; j < s.length(); j++ ) {
            char ch = s[j];
            if ( alphabet[ch-97] > 0 ) {
                alphabet[ch-97]--;
            } else {
                break;
            }
        }
        mxLen = max(mxLen, ( j - i ));
    }
    return mxLen;
}

int main() {
    string s = "bcbbbcba";
    cout << maximumLengthSubstring(s);
    return 0;
}