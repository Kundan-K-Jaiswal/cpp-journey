
// 344. Reverse String  |  Platform : LeetCode


// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.
 

// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]


// Constraints:
// 1 <= s.length <= 10^5
// s[i] is a printable ascii character.




#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) {
    int n = s.size() - 1;
    for ( int i = 0; i*2 < s.size(); i++ ) {
        swap(s[i],s[n-i]);
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for ( char ch : s ) {
        cout << ch << ' ';
    }
    return 0;
}