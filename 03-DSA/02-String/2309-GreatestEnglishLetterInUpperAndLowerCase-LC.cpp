
// 2309. Greatest English Letter in Upper and Lower Case  |  Platform : LeetCode


// Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and 
// uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.
// An English letter b is greater than another letter a if b appears after a in the English alphabet.
 

// Example 1:
// Input: s = "lEeTcOdE"
// Output: "E"

// Explanation:

// The letter 'E' is the only letter to appear in both lower and upper case.


// Example 2:
// Input: s = "arRAzFif"
// Output: "R"

// Explanation:

// The letter 'R' is the greatest letter to appear in both lower and upper case.
// Note that 'A' and 'F' also appear in both lower and upper case, but 'R' is greater than 'F' or 'A'.


// Example 3:
// Input: s = "AbCdEfGhIjK"
// Output: ""

// Explanation:

// There is no letter that appears in both lower and upper case.
 

// Constraints:
// 1 <= s.length <= 1000
// s consists of lowercase and uppercase English letters.




#include<iostream>
#include<vector>
using namespace std;

string greatestLetter(string s) {
    char k = '0';
    for ( int i = 0; i < s.length(); i++ ) {
        if ( s[i] >= 'a' && s[i] <= 'z' ) {
            for ( int j = i+1; j < s.length(); j++ ) {
                if ( s[j] == (s[i]-32) && s[j] > k ) {
                    k = s[j];
                } 
            }
        } else {
            for ( int j = i+1; j < s.length(); j++ ) {
                if ( s[j] == (s[i]+32) && s[i] > k ) {
                    k = s[i];
                } 
            }
        }
    }
    if ( k == '0') {
        return "";
    }
    string ans = "";
    ans += k;
    return ans;
}

int main() {
    string s = "arRAzFif";
    cout << greatestLetter(s);
    return 0;
}