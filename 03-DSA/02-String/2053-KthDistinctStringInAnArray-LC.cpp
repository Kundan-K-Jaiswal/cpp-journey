
// 2053. Kth Distinct String in an Array |  Platform : LeetCode

// A distinct string is a string that is present only once in an array.
// Given an array of strings arr, and an integer k, return the kth distinct string present in arr. 
// If there are fewer than k distinct strings, return an empty string "".
// Note that the strings are considered in the order in which they appear in the array.

// Example 1:
// Input: arr = ["d","b","c","b","c","a"], k = 2
// Output: "a"
// Explanation:
// The only distinct strings in arr are "d" and "a".
// "d" appears 1st, so it is the 1st distinct string.
// "a" appears 2nd, so it is the 2nd distinct string.
// Since k == 2, "a" is returned. 

// Example 2:
// Input: arr = ["aaa","aa","a"], k = 1
// Output: "aaa"
// Explanation:
// All strings in arr are distinct, so the 1st string "aaa" is returned.

// Example 3:
// Input: arr = ["a","b","a"], k = 3
// Output: ""
// Explanation:
// The only distinct string is "b". Since there are fewer than 3 distinct strings, we return an empty string "".
 
// Constraints:
// 1 <= k <= arr.length <= 1000
// 1 <= arr[i].length <= 5
// arr[i] consists of lowercase English letters.




#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string,int> freq;
    for ( auto str : arr ) {
        freq[str]++;
    }
    for ( auto str : arr ) {
        if ( freq[str] == 1 ) {
            k--;
        }
        if ( k == 0 ) return str;
    }
    return "";
}


int main() {
    vector<string> arr = {"aaa","aa","a"};
    int k = 1;
    cout << kthDistinct(arr,k);
    return 0;
}



// Approach : Traversal & Frequency Count

// Solution Core : We will count the frequency of each string, then we will traverse through the array again and checkkk
// if its frequency is 1 it means it is a unique string so we will update k to k-- and check if k == 0 then return that
// string if not check for another unique element, if nothing is returned then return "".

// Time Complexity : O(n) ; n = arr.size()
// Space Complexity : O(n)