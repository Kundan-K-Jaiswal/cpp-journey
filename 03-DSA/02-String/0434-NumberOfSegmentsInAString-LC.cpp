
// 434. Number of Segments in a String  |  Platform : LeetCode


// Given a string s, return the number of segments in the string.
// A segment is defined to be a contiguous sequence of non-space characters.
 

// Example 1:
// Input: s = "Hello, my name is John"
// Output: 5

// Explanation: The five segments are ["Hello,", "my", "name", "is", "John"]


// Example 2:
// Input: s = "Hello"
// Output: 1


// Constraints:
// 0 <= s.length <= 300
// s consists of lowercase and uppercase English letters, digits, or one of the following characters "!@#$%^&*()_+-=',.:".
// The only space character in s is ' '.




#include<iostream>
#include<vector>
using namespace std;

int countSegments(string s) {
    vector<string> words;
    string word = "";
    for ( char ch : s ) {
        if ( ch == ' ' ) {
            if ( word.length() > 0 ) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += ch;
        }
    }
    if ( word.length() > 0 ) {
        words.push_back(word);
        word = "";
    }
    return words.size();
}

int main() {
    string s = "Hello, my name is John";
    cout << countSegments(s);
    return 0;
}