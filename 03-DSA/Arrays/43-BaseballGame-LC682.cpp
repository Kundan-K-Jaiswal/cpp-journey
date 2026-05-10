
// 682. Baseball Game  |  Platform : LeetCode 

// You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with 
// an empty record.
// You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record 
// and is one of the following:

// -> An integer x.
// Record a new score of x.

// -> '+'.
// Record a new score that is the sum of the previous two scores.

// -> 'D'.
// Record a new score that is the double of the previous score.

// -> 'C'.
// Invalidate the previous score, removing it from the record.

// Return the sum of all the scores on the record after applying all the operations.
// The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that 
// all operations are valid.

// Example 1:
// Input: ops = ["5","2","C","D","+"]
// Output: 30
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "2" - Add 2 to the record, record is now [5, 2].
// "C" - Invalidate and remove the previous score, record is now [5].
// "D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
// "+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
// The total sum is 5 + 10 + 15 = 30.

// Example 2:
// Input: ops = ["5","-2","4","C","D","9","+","+"]
// Output: 27
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "-2" - Add -2 to the record, record is now [5, -2].
// "4" - Add 4 to the record, record is now [5, -2, 4].
// "C" - Invalidate and remove the previous score, record is now [5, -2].
// "D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
// "9" - Add 9 to the record, record is now [5, -2, -4, 9].
// "+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
// "+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
// The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.

// Example 3:
// Input: ops = ["1","C"]
// Output: 0
// Explanation:
// "1" - Add 1 to the record, record is now [1].
// "C" - Invalidate and remove the previous score, record is now [].
// Since the record is empty, the total sum is 0.
 
// Constraints:
// 1 <= operations.length <= 1000
// operations[i] is "C", "D", "+", or a string representing an integer in the range [-3 * 10^4, 3 * 10^4].
// For operation "+", there will always be at least two previous scores on the record.
// For operations "C" and "D", there will always be at least one previous score on the record.




#include<iostream>
#include<vector>
using namespace std;

int calPoints(vector<string>& operations) {
    vector<int> points; 
    int end = -1;

    for ( auto val : operations ) {
        int newPoint;
        if ( val == "+") {
            newPoint = points[end] + points[end-1];
            points.push_back(newPoint);
            end++;
        } else if ( val == "D") {
            newPoint = points[end] * 2;
            points.push_back(newPoint);
            end++;
        } else if ( val == "C" ) {
            points.pop_back();
            end--;
        } else {
            newPoint = stoi(val);
            points.push_back(newPoint);
            end++;
        }
    }
    
    int sum = 0;
    for ( int val : points ) {
        sum += val;
    }
    return sum;
}



int main() {
    vector<string> operations = {"5","-2","4","C","D","9","+","+"};
    cout << calPoints(operations);
    return 0;
}



// Approach : Array Traversal & Apply Changes

// Solution Core : We will traverse through the operation vector, and maintain the score accordingly in a integer vector
// as specified at the end we will traverse through the vector to calculate the sum of the scores and then return it.

// Time Complexity : O(n) 
// Space Complexity : O(n)
// ; n -> size of operations vector 