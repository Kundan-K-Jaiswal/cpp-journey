// 50. Pow(x, n) | Platform : LeetCode 

// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
 
// Example 1:
// Input: x = 2.00000, n = 10
// Output: 1024.00000

// Example 2:
// Input: x = 2.10000, n = 3
// Output: 9.26100

// Example 3:
// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25
 
// Constraints:
// -100.0 < x < 100.0
// -2^31 <= n <= 2^31-1
// n is an integer.
// Either x is not zero or n > 0.
// -104 <= xn <= 104


#include<iostream>
using namespace std;

double myPow(double x, int n) {

    if ( x == 0 ) return 0.0;
    if ( x == 1 ) return 1.0;

    long binForm = n;
    double ans = 1; // 2^0

    if ( n < 0 ) {
        binForm = -binForm;
        x = 1/x;
    }

    while ( binForm > 0 ) {
        if ( binForm % 2 == 1 ) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main() {
    double x = 2.00000;
    int n = 10; 
    cout << myPow(x,n);
    return 0;
}



// Approach : Binary Exponentiation
// Concept : For those places in binary form which contains 1, product of 2^position
// Time Complexity : O(log(n))
// Space Complexity : O(1)