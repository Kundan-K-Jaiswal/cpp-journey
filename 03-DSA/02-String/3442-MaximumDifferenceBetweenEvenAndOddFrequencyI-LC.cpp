
// 3442. Maximum Difference Between Even and Odd Frequency I  |  Platform : LeetCode


// You are given a string s consisting of lowercase English letters.
// Your task is to find the maximum difference diff = freq(a1) - freq(a2) between the frequency of characters a1 and 
// a2 in the string such that:
// a1 has an odd frequency in the string.
// a2 has an even frequency in the string.
// Return this maximum difference.
 


// Example 1:
// Input: s = "aaaaabbc"
// Output: 3

// Explanation:
// The character 'a' has an odd frequency of 5, and 'b' has an even frequency of 2.
// The maximum difference is 5 - 2 = 3.


// Example 2:
// Input: s = "abcabcab"
// Output: 1

// Explanation:
// The character 'a' has an odd frequency of 3, and 'c' has an even frequency of 2.
// The maximum difference is 3 - 2 = 1.
 


// Constraints:
// 3 <= s.length <= 100
// s consists only of lowercase English letters.
// s contains at least one character with an odd frequency and one with an even frequency.




#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int maxDifference(string s) {
    unordered_map<char,int> freq;
    for ( char ch : s ) {
        freq[ch]++;
    }

    int odd = INT16_MIN, even = INT16_MAX;
    for ( auto p : freq ) {
        if ( p.second % 2 == 0 ) {
            even = min(even,p.second );
        } else {
            odd = max(odd,p.second );
        }
    }
    return odd - even;
}

int main() {
    string s = "aaaaabbc";
    cout << maxDifference(s);
    return 0;
}