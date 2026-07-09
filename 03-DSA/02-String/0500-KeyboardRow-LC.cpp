
// 500. Keyboard Row  |  Platform : LeetCode

// Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.
// Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.
// In the American keyboard:
// the first row consists of the characters "qwertyuiop",
// the second row consists of the characters "asdfghjkl", and
// the third row consists of the characters "zxcvbnm".

// Example 1:
// Input: words = ["Hello","Alaska","Dad","Peace"]
// Output: ["Alaska","Dad"]
// Explanation:
// Both "a" and "A" are in the 2nd row of the American keyboard due to case insensitivity.

// Example 2:
// Input: words = ["omk"]
// Output: []

// Example 3:
// Input: words = ["adsdf","sfd"]
// Output: ["adsdf","sfd"]

// Constraints:
// 1 <= words.length <= 20
// 1 <= words[i].length <= 100
// words[i] consists of English letters (both lowercase and uppercase). 




#include<iostream>
#include<vector>
using namespace std;

vector<string> findWords(vector<string>& words) {
    vector<string> res;
    string row1 = "qwertyuiop", row2 = "asdfghjkl", row3 = "zxcvbnm";
    for ( string word : words ) {
        bool toPush = true;
        if ( row1.find(tolower(word[0])) < row1.length() ) {
            for ( char ch : word ) {
                if(row1.find(tolower(ch)) > row1.length()) {
                    toPush = false;
                    break;
                }
            }
        } else if ( row2.find(tolower(word[0])) < row2.length() ) {
            for ( char ch : word ) {
                if(row2.find(tolower(ch)) > row2.length()) {
                    toPush = false;
                    break;
                }
            }
        } else {
            for ( char ch : word ) {
                if(row3.find(tolower(ch)) > row3.length()) {
                    toPush = false;
                    break;
                }
            }
        }
        if ( toPush ) res.push_back(word);
    }
    return res;
}

int main() {
    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    vector<string> result = findWords(words);
    for ( string word : result ) {
        cout << word << " ";
    }
    return 0;
}