
// 66. Plus One | Platform : LeetCode

// You are given a large integer represented as an integer array digits, 
// where each digits[i] is the ith digit of the integer. 
// The digits are ordered from most significant to least significant in left-to-right order. 
// The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

// Example 1:
// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

// Example 2:
// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Incrementing by one gives 4321 + 1 = 4322.
// Thus, the result should be [4,3,2,2].

// Example 3:
// Input: digits = [9]
// Output: [1,0]
// Explanation: The array represents the integer 9.
// Incrementing by one gives 9 + 1 = 10.
// Thus, the result should be [1,0].
 

// Constraints:
// 1 <= digits.length <= 100
// 0 <= digits[i] <= 9
// digits does not contain any leading 0's.


#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int ind = digits.size()-1;
    if ( digits[ind] != 9 ) {
        digits[ind]++;
        return digits;
    } else {
        while ( ind >= 0 && digits[ind] == 9 ) {
            digits[ind--] = 0;
        }
        if ( ind == -1 ) {
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        digits[ind]++;
    }
    return digits;
}

int main() {
    vector<int> digits = {9,9,9,9,9,9,9,9,9,9};
    vector<int> ans = plusOne(digits);
    for (int val : digits ) {
        cout << val << " ";
    }
    return 0;
}



// Approach : Carry Propagation

// Solution Core : Firstly we will check if the last digit is not 9 then we will simply increase the last digit. 
// But if the last digit is 9 then we have to look for a non 9 digit in the array and replace all the 9 with 0 and
// increment the first non 9 element from back. In case all the elements are found to be 9 then we will replace the first
// element by 1 and other 9 with 0 and insert a new 0 at the end. 

// Time Complexity : O(n)
// Space Complexity : O(1)