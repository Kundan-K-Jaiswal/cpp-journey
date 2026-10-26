
// 28. Find the Index of the First Occurrence in a String  |  Platform : LeetCode

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle 
// is not part of haystack.
 

// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0

// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.



// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1

// Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

// Constraints:
// 1 <= haystack.length, needle.length <= 10^4
// haystack and needle consist of only lowercase English characters.




#include<iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle) {
    // return haystack.find(needle); solved using STL

    for ( int i = 0; i < haystack.length(); i++ ) {
        int pt = 0;
        for ( int j = i; j < haystack.length(); j++ ) {
            if ( haystack[j] == needle[pt]) {
                pt++;
                if ( pt == needle.length() )  {
                    return i;
                }
            } else {
                break;
            }
        }
    }
    return -1;
}

int main() {
    string haystack = "leetcode", needle = "leeto";
    cout << strStr(haystack,needle);
    return 0;
}