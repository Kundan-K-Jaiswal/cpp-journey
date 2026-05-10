

// 717. 1-bit and 2-bit Characters  |  Platform : LeetCode 

// We have two special characters:
// The first character can be represented by one bit 0.
// The second character can be represented by two bits (10 or 11).
// Given a binary array bits that ends with 0, return true if the last character must be a one-bit character.

// Example 1:
// Input: bits = [1,0,0]
// Output: true
// Explanation: The only way to decode it is two-bit character and one-bit character.
// So the last character is one-bit character.

// Example 2:
// Input: bits = [1,1,1,0]
// Output: false
// Explanation: The only way to decode it is two-bit character and two-bit character.
// So the last character is not one-bit character.

// Constraints:
// 1 <= bits.length <= 1000
// bits[i] is either 0 or 1.




#include<iostream>
#include<vector>
using namespace std;

bool isOneBitCharacter(vector<int>& bits) {

    int sz = bits.size();

    if ( sz == 1 ) {
        return true;
    } else if ( bits[sz-2] == 0 ) {
        return true;
    } else {
        int count = 0;
        sz -= 2;
        while ( sz >= 0 && bits[sz] == 1 ) {
            count++;
            sz--;
        }
        if (count % 2 == 0 ) {
            return true;
        }
    }

    return false;
}


int main() {
    vector<int> bits = {1,1,1,0,1,0};
    cout << isOneBitCharacter(bits);
    return 0;

}



// Approach : Consecutive Values

// Solution Core : Check if only one element is present in the array i.e. 0 return true, if the second last element
// is also 0 then retrun true because the last 0 becomes the single bit. Now if all the above condition is false
// then we have to find consecutive number of 1 before the last element, doing so we can find if the last element
// is a 1 bit character or 2 bit character.

// Time Complexity : O(n) 
// Space Complexity : O(1)