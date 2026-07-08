
// 806. Number of Lines To Write String  |  Platform : LeetCode

// You are given a string s of lowercase English letters and an array widths denoting how many pixels wide each 
// lowercase English letter is. Specifically, widths[0] is the width of 'a', widths[1] is the width of 'b', and so on.

// You are trying to write s across several lines, where each line is no longer than 100 pixels. Starting at the beginning 
// of s, write as many letters on the first line such that the total width does not exceed 100 pixels. 
// Then, from where you stopped in s, continue writing as many letters as you can on the second line. 
// Continue this process until you have written all of s.

// Return an array result of length 2 where:
// result[0] is the total number of lines.
// result[1] is the width of the last line in pixels.

// Example 1:
// Input: widths = [10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10], 
// s = "abcdefghijklmnopqrstuvwxyz"
// Output: [3,60]
// Explanation: You can write s as follows:
// abcdefghij  // 100 pixels wide
// klmnopqrst  // 100 pixels wide
// uvwxyz      // 60 pixels wide
// There are a total of 3 lines, and the last line is 60 pixels wide.

// Example 2:
// Input: widths = [4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10], s = "bbbcccdddaaa"
// Output: [2,4]
// Explanation: You can write s as follows:
// bbbcccdddaa  // 98 pixels wide
// a            // 4 pixels wide
// There are a total of 2 lines, and the last line is 4 pixels wide.

// Constraints:
// widths.length == 26
// 2 <= widths[i] <= 10
// 1 <= s.length <= 1000
// s contains only lowercase English letters.




#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<int> numberOfLines(vector<int>& widths, string s) {

    int lines = 1, pixel = 0;

    for ( auto letter : s ) {
        int ind = letter - 97;
        if ( pixel + widths[ind] <= 100 ) { // checks if under 100 pixels or not
            pixel += widths[ind];
        } else {  // if not then add that letter into next line
            lines++;
            pixel = widths[ind];
        }
    }

    return {lines,pixel};
}


int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    vector<int> widths = {4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    vector<int> result = numberOfLines(widths,s);
    cout << result[0] << " " << result[1];
    return 0;
}



// Approach : Mathematical Logic

// Solution Core : We will create two variables lines & pixel which keeps the track of the lines used and current pixel
// in that line. We will traverse through the given string s and find the index of each character by doing difference with
// 97 and check the value of width at that index if the value + current pixel is within 100 we will simply add the value 
// to the pixel but if it exceeds we will increase the line and change the value of pixel to that value.

// Time Complexity : O(n) -> n = length of string s 
// Space Complexity : O(1)