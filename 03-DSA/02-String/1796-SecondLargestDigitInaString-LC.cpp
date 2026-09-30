
// 1796. Second Largest Digit in a String  |  Platform : LeetCode


// Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.
// An alphanumeric string is a string consisting of lowercase English letters and digits.

 
// Example 1:
// Input: s = "dfa12321afd"
// Output: 2
// Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.


// Example 2:
// Input: s = "abc1111"
// Output: -1
// Explanation: The digits that appear in s are [1]. There is no second largest digit. 
 

// Constraints:
// 1 <= s.length <= 500
// s consists of only lowercase English letters and digits.




#include<iostream>
using namespace std;

int secondHighest(string s) {
    int maxVal = INT16_MIN, secVal = -1;
    for ( char ch : s ) {
        if ( isdigit(ch) ) {
            int n = ch - '0';
            if ( n > maxVal ) {
                secVal = maxVal;
                maxVal = n;
            } else if ( n < maxVal ) {
                if ( n > secVal ) {
                    secVal = n;
                }
            }
        }
    }
    return max(secVal,-1);
}

int main() {
    string s = "dfa123321afd";
    cout << secondHighest(s);
    return 0;
}