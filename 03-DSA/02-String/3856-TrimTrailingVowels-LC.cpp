
// 3856. Trim Trailing Vowels  |  Platform : LeetCode

// You are given a string s that consists of lowercase English letters.
// Return the string obtained by removing all trailing vowels from s.
// The vowels consist of the characters 'a', 'e', 'i', 'o', and 'u'.

 
// Example 1:
// Input: s = "idea"
// Output: "id"

// Explanation:
// Removing "idea", we obtain the string "id".



// Example 2:
// Input: s = "day"
// Output: "day"

// Explanation:
// There are no trailing vowels in the string "day".



// Example 3:
// Input: s = "aeiou"
// Output: ""

// Explanation:
// Removing "aeiou", we obtain the string "".


 
// Constraints:
// 1 <= s.length <= 100
// s consists of only lowercase English letters.




#include<iostream>
#include<string>
using namespace std;

string trimTrailingVowels(string s) {
    int sz = s.length()-1;
    while ( sz >= 0 ) {
        if ( s[sz] == 'a' || s[sz] == 'e' ||s[sz] == 'i' ||s[sz] == 'o' ||s[sz] == 'u' ) {
            s.pop_back();
            sz--;
        } else {
            return s;
        }
    }
    return "";
}

int main() {
    string s = "idea";
    cout << trimTrailingVowels(s);
    return 0;
}