
// 3726. Remove Zeros in Decimal Representation  |  Platform : LeetCode


// You are given a positive integer n.
// Return the integer obtained by removing all zeros from the decimal representation of n.


// Example 1:
// Input: n = 1020030
// Output: 123

// Explanation:
// After removing all zeros from 1020030, we get 123.


// Example 2:
// Input: n = 1
// Output: 1

// Explanation:
// 1 has no zero in its decimal representation. Therefore, the answer is 1.
 

// Constraints:
// 1 <= n <= 10^15




#include<iostream>
using namespace std;

long long removeZeros(long long n) {
    long long pos = 1, result = 0;
    while ( n > 0 ) {
        int ld = n % 10;
        if ( ld ) {
            result += ld * pos;
            pos *= 10;
        }
        n /= 10;
    }
    return result;
}

int main() {
    long long n = 10200300;
    cout << removeZeros(n);
    return 0;
}