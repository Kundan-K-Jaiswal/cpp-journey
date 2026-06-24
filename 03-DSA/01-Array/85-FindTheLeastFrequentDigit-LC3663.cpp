
// 3663. Find The Least Frequent Digit    |  Platform : LeetCode

// Given an integer n, find the digit that occurs least frequently in its decimal representation. 
// If multiple digits have the same frequency, choose the smallest digit.
// Return the chosen digit as an integer.
// The frequency of a digit x is the number of times it appears in the decimal representation of n.
 
// Example 1:
// Input: n = 1553322
// Output: 1
// Explanation:
// The least frequent digit in n is 1, which appears only once. All other digits appear twice.

// Example 2:
// Input: n = 723344511
// Output: 2
// Explanation:
// The least frequent digits in n are 7, 2, and 5; each appears only once.

// Constraints:
// 1 <= n <= 23^1​​​​​​​ - 1




#include<iostream>
#include<vector>
using namespace std;

int getLeastFrequentDigit(int n) {
    int feq[10] = {0};
    while ( n > 0 ) {
        int digit = n%10;
        feq[digit]++;
        n /= 10;
    }

    int ans = -1;
    for ( int i=0; i<10; i++) {
        if ( feq[i] != 0 ) {
            if ( ans == -1 ) {
                ans = i;
            } else {
                if ( feq[i] < feq[ans]) {
                    ans = i;
                }
            }
        }
    }
    return ans;
}


int main() {
    int n = 723344511;
    cout << getLeastFrequentDigit(n);
    return 0;
}