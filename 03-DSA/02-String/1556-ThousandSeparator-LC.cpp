
// 1556. Thousand Separator  |  Platform : LeetCode

// Given an integer n, add a dot (".") as the thousands separator and return it in string format.
 

// Example 1:
// Input: n = 987
// Output: "987"


// Example 2:
// Input: n = 1234
// Output: "1.234"
 

// Constraints:
// 0 <= n <= 2^31 - 1




#include<iostream>
#include<vector>
using namespace std;

string thousandSeparator(int n) {
    string s = to_string(n), res = "";
    n = s.length();
    n %= 3;
    if ( n == 1 ) {
        res.push_back(s[0]);
        res.push_back('.');
    } else if ( n == 2) {
        res.push_back(s[0]);
        res.push_back(s[1]);
        res.push_back('.');
    }
    for ( int i = n; i<int(s.length())-2; i+=3 ) {
        res.push_back(s[i]);
        res.push_back(s[i+1]);
        res.push_back(s[i+2]);
        res.push_back('.');
    }
    res.pop_back();
    return res;
}

int main() {
    int n = 1234;
    cout << thousandSeparator(n);
    return 0;
}