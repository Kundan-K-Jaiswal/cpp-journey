

// 520. Detect Capital  |  Platform : LeetCode


// We define the usage of capitals in a word to be right when one of the following cases holds:
// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital, like "Google".
// Given a string word, return true if the usage of capitals in it is right.
 

// Example 1:
// Input: word = "USA"
// Output: true

// Example 2:
// Input: word = "FlaG"
// Output: false
 

// Constraints:
// 1 <= word.length <= 100
// word consists of lowercase and uppercase English letters.




#include<iostream>
#include<vector>
using namespace std;

bool detectCapitalUse(string word) {
    // case 1 : all capital
    bool isCapital = true;
    for ( char letter : word ) {
        if ( !(letter >= 'A' && letter <= 'Z') ) {
            isCapital = false;
            break;
        }
    }
    if (isCapital) {
        return true;
    }

    // case 2 : all small
    bool isSmall = true;
    for ( char letter : word ) {
        if ( !(letter >= 'a' && letter <= 'z') ) {
            isSmall = false;
            break;
        }
    }
    if ( isSmall ) {
        return true;
    }

    // case 3 : Title
    if ( (word[0] >= 'a' && word[0] <= 'z') ) return false;

    bool isTitle = true;
    for ( int i = 1; i<word.length(); i++ ) {
        if ( !(word[i] >= 'a' && word[i] <= 'z') ) {
            isTitle = false;
            break;
        }
    }
    if ( isTitle ) {
        return true;
    }


    return false;
}

int main() {
    string word = "FlaG";
    cout << detectCapitalUse(word);
    return 0;
}