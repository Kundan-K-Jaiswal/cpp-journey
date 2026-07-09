
// 1961. Check If String Is a Prefix of Array  |  Platform : LeetCode

// Given a string s and an array of strings words, determine whether s is a prefix string of words.
// A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some
//  positive k no larger than words.length.

// Return true if s is a prefix string of words, or false otherwise.

// Example 1:
// Input: s = "iloveleetcode", words = ["i","love","leetcode","apples"]
// Output: true
// Explanation:
// s can be made by concatenating "i", "love", and "leetcode" together.

// Example 2:
// Input: s = "iloveleetcode", words = ["apples","i","love","leetcode"]
// Output: false
// Explanation:
// It is impossible to make s using a prefix of arr.
 

// Constraints:
// 1 <= words.length <= 100
// 1 <= words[i].length <= 20
// 1 <= s.length <= 1000
// words[i] and s consist of only lowercase English letters.




#include<iostream>
#include<vector>
using namespace std;

bool isPrefixString(string s, vector<string>& words) {
    int i = 0, n = s.length();
    for ( string word : words ) {
        for ( int j = 0; j < word.length(); j++ ) {
            if ( word[j] == s[i] ) {
                i++;
            } else {
                return false;
            }
            if ( i == n && j+1 == word.length() ) {
                return true;
            }
        }
        if ( i == n ) break;
    }
    return false;
}


int main() {
    vector<string> words = {"apples","i","love","leetcode"};
    string s = "iloveleetcode";
    cout << isPrefixString(s,words);
    return 0;
}