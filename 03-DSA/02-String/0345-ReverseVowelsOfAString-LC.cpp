
// 345. Reverse Vowels of a String  |  Platform : LeetCode

// Given a string s, reverse only all the vowels in the string and return it.
// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.


// Example 1:
// Input: s = "IceCreAm"
// Output: "AceCreIm"
// Explanation:
// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:
// Input: s = "leetcode"
// Output: "leotcede"
 

// Constraints:
// 1 <= s.length <= 3 * 10^5
// s consist of printable ASCII characters.




#include<iostream>
using namespace std;

string reverseVowels(string s) {
    int start = 0, end = s.length()-1;
    string vowels = "aeiouAEIOU";
    bool isStart = false, isEnd = false;
    while ( start < end ) {
        if ( vowels.find(s[start]) > vowels.length() ) {
            start++;
        } else {
            isStart = true;
        }
        if ( vowels.find(s[end]) > vowels.length() ) {
            end--;
        } else {
            isEnd = true;
        }

        if ( isStart && isEnd ) {
            swap(s[start],s[end]);
            start++;
            end--;
            isStart = false;
            isEnd = false;
        }
    }
    return s;
}

int main() {
    string s = "leetcode";
    cout << reverseVowels(s);
    return 0;
}