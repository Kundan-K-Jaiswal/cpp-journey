
// 1957. Delete Characters to Make Fancy String  |  Platform : LeetCode

// A fancy string is a string where no three consecutive characters are equal.
// Given a string s, delete the minimum possible number of characters from s to make it fancy.
// Return the final string after the deletion. It can be shown that the answer will always be unique.

// Example 1:
// Input: s = "leeetcode"
// Output: "leetcode"
// Explanation:
// Remove an 'e' from the first group of 'e's to create "leetcode".
// No three consecutive characters are equal, so return "leetcode".

// Example 2:
// Input: s = "aaabaaaa"
// Output: "aabaa"
// Explanation:
// Remove an 'a' from the first group of 'a's to create "aabaaaa".
// Remove two 'a's from the second group of 'a's to create "aabaa".
// No three consecutive characters are equal, so return "aabaa".

// Example 3:
// Input: s = "aab"
// Output: "aab"
// Explanation: No three consecutive characters are equal, so return "aab".
 
// Constraints:
// 1 <= s.length <= 10^5
// s consists only of lowercase English letters.




#include<iostream>
#include<string>
using namespace std;

string makeFancyString(string s) {
    string ans = "";
    int count = 0;
    for ( int i = 0; i < s.length()-1; i++ ) {
        if ( s[i] != s[i+1] ) {
            ans.push_back(s[i]);
            count = 0;
        } else {
            if ( count != 1 ) {
                ans.push_back(s[i]);
                count++;
            }
        }
    }
    ans.push_back(s[s.length()-1]);
    return ans;
}


int main() {
    string s = "leeetcodeee";
    cout << makeFancyString(s);
    return 0;
}



// Approach : Traversal

// Solution Core : We will traverse through the string, if the current char is not same as the next character then
// add it into the answer string, if it is same as that of the next char then simply add it to answer and dont add
// any of the repeating character until the next char of that is different. 

// Time Complexity : O(n) ; n = string.length()
// Space Complexity : O(n)