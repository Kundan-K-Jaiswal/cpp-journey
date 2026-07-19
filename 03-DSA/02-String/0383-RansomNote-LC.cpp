
// 383. Ransom Note  |  Platform : LeetCode


// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from 
// magazine and false otherwise.
// Each letter in magazine can only be used once in ransomNote.

 
// Example 1:
// Input: ransomNote = "a", magazine = "b"
// Output: false

// Example 2:
// Input: ransomNote = "aa", magazine = "ab"
// Output: false

// Example 3:
// Input: ransomNote = "aa", magazine = "aab"
// Output: true
 

// Constraints:
// 1 <= ransomNote.length, magazine.length <= 10^5
// ransomNote and magazine consist of lowercase English letters.




#include<iostream>
#include<unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {

    unordered_map<char,int> freqR, freqM;

    for ( char ch : ransomNote ) { // frequency of characters of ransomNote
        freqR[ch]++;
    }

    for ( char ch : magazine ) { // frequency of characters of magazine
        freqM[ch]++;
    }

    for ( auto p : ransomNote ) { // check if it satisfies or not
        if ( freqR[p] > freqM[p] ) return false;
    }

    return true;
}

int main() {
    string ransomNote = "aa", magazine = "aab";
    cout << canConstruct(ransomNote,magazine);
    return 0;
}