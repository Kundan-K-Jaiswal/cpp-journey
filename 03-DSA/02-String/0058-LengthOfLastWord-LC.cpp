
// 58. Length of Last Word  |  Platform : LeetCode


// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

 
// Example 1:
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.

// Example 2:
// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.

// Example 3:
// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
 

// Constraints:
// 1 <= s.length <= 10^4
// s consists of only English letters and spaces ' '.
// There will be at least one word in s.




#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.length()-1;
    bool isNotFound = true;
    int count = 0;
    while ( n >= 0 && (isNotFound || s[n] != ' ') ) {
        if (s[n] != ' ' ) {
            isNotFound = false;
            count++;
        }
        n--;
    }
    return count;
}

int main() {
    string s = "luffy is still joyboy";
    cout << lengthOfLastWord(s);
    return 0;
}