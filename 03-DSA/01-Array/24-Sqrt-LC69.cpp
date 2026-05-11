
// 69. Sqrt(x) | Platform : LeetCode  

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
// The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.
// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

// Example 1:
// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.

// Example 2:
// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 
// Constraints:
// 0 <= x <= 2^31 - 1



#include<iostream>
using namespace std;

int mySqrt(int x) {

    if(x==0) return 0;

    int i = 1;
    while ( i <= x/i ) {
        i++;
    }

    return i-1;

}

int main() {
    int x = 9;
    cout << mySqrt(x);
    return 0;
}



// Approach : Brute Force

// Solution Core : Check for each number from if it is less than square root of the given number or not.
// if we encounter bigger value simply return i-1;

// Time Complexity : O(sqrt(n))
// Space Complexity : O(1)