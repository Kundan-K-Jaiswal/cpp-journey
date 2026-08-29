
// 1417. Reformat The String  |  Platform : LeetCode


// You are given an alphanumeric string s. (Alphanumeric string is a string consisting of lowercase English letters and 
// digits).
// You have to find a permutation of the string where no letter is followed by another letter and no digit is followed by 
// another digit. That is, no two adjacent characters have the same type.
// Return the reformatted string or return an empty string if it is impossible to reformat the string.


// Example 1:
// Input: s = "a0b1c2"
// Output: "0a1b2c"
// Explanation: No two adjacent characters have the same type in "0a1b2c". "a0b1c2", "0a1b2c", "0c2a1b" are also valid 
// permutations.


// Example 2:
// Input: s = "leetcode"
// Output: ""
// Explanation: "leetcode" has only characters so we cannot separate them by digits.


// Example 3:
// Input: s = "1229857369"
// Output: ""
// Explanation: "1229857369" has only digits so we cannot separate them by characters.
 

// Constraints:
// 1 <= s.length <= 500
// s consists of only lowercase English letters and/or digits.




#include<iostream>
#include<vector>
using namespace std;

string reformat(string s) {
    vector<char> dig, alp;
    for ( char ch : s ) {
        if ( isdigit(ch) ) {
            dig.push_back(ch);
        } else {
            alp.push_back(ch);
        }
    }

    int n1 = dig.size()-1, n2 = alp.size()-1;
    if ( abs(n1-n2) > 1 ) {
        return "";
    }
    s = "";
    if ( n1>n2 ) {
        while (n2>=0) {
            s.push_back(dig[n1--]);
            s.push_back(alp[n2--]);
            dig.pop_back();
            alp.pop_back();
        }
        s.push_back(dig[n1]);
    } else {
        while (n1>=0) {
            s.push_back(alp[n2--]);
            s.push_back(dig[n1--]);
            dig.pop_back();
            alp.pop_back();
        }
        if ( n2 > n1 ) s.push_back(alp[n2]);
    }
    return s;
}

int main() {
    string s = "a0b1c2";
    cout << reformat(s);
    return 0;
}