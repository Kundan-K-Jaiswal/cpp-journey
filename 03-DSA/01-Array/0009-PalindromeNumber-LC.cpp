
// 9. Palindrome Number  |  Platform : LeetCode

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
// Constraints:
// -2^31 <= x <= 2^31 - 1




#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x) {
    if ( x < 0 ) return false;
    int num = x;
    int revNum = 0;
    while ( x > 0 ) {
        int dig = x % 10;
        if ( revNum < INT16_MIN/10 || revNum > INT16_MAX/10 ) {
            return false;
        }
        revNum = revNum * 10 + dig;
        x /= 10;
    }
    return revNum == num;
}

int main() {
    int x = 121;
    cout << isPalindrome(x);
    return 0;
}