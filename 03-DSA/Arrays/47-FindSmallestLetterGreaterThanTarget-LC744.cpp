
// 744. Find Smallest Letter Greater Than Target  |  Platform : LeetCode 

// You are given an array of characters letters that is sorted in non-decreasing order, and a character target. 
// There are at least two different characters in letters.
// Return the smallest character in letters that is lexicographically greater than target. 
// If such a character does not exist, return the first character in letters.

// Example 1:
// Input: letters = ["c","f","j"], target = "a"
// Output: "c"
// Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.

// Example 2:
// Input: letters = ["c","f","j"], target = "c"
// Output: "f"
// Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.

// Example 3:
// Input: letters = ["x","x","y","y"], target = "z"
// Output: "x"
// Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
 
// Constraints:
// 2 <= letters.length <= 10^4
// letters[i] is a lowercase English letter.
// letters is sorted in non-decreasing order.
// letters contains at least two different characters.
// target is a lowercase English letter.




#include<iostream>
#include<vector>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int st = 0, end = letters.size()-1;
    bool isFound = false; // flag to check if found or not 
    char ans;
    while ( st <= end ) {
        int mid = st + (end -st)/2;
        if ( letters[mid] > target ) {
            end = mid-1;
            ans =  letters[mid];
            isFound = true;
        } else { 
            st = mid+1;
        }
    }
    if(isFound) {
        return ans;
    }

    return letters[0]; // if not found 
}


int main() {
    vector<char> letters = {'x','x','y','y'};
    char target = 'z';
    cout << nextGreatestLetter(letters,target);
    return 0;
}



// Approach : Binary Search

// Solution Core : Since, the array is already sorted and we have to search for certain value we will use binary search
// we will calculate the mid value and check if the value at mid is greater than the target value we will store it in
// a variable and reduce the search space to end = mid - 1, and if the mid value is less then the target we will update
// the start variable to mid + 1. If no element is found greater than the target then simply return vector[0].


// Time Complexity : O(n(log n)) 
// Space Complexity : O(1)