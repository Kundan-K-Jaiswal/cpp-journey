
// 1288. Remove Covered Intervals  |  Platform : LeetCode

// Given an array intervals where intervals[i] = [li, ri] represent the interval [li, ri), remove all intervals that are covered by another interval in the list.
// The interval [a, b) is covered by the interval [c, d) if and only if c <= a and b <= d.
// Return the number of remaining intervals.

// Example 1:
// Input: intervals = [[1,4],[3,6],[2,8]]
// Output: 2
// Explanation: Interval [3,6] is covered by [2,8], therefore it is removed.

// Example 2:
// Input: intervals = [[1,4],[2,3]]
// Output: 1
 
// Constraints:
// 1 <= intervals.length <= 1000
// intervals[i].length == 2
// 0 <= li < ri <= 105
// All the given intervals are unique.




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> finalIntervals;
    finalIntervals.push_back(intervals[0]);
    for ( int i = 1; i<intervals.size(); i++ ) {
        if(finalIntervals.back()[0] == intervals[i][0]) {
            finalIntervals.back()[1] = intervals[i][1];
        } else {
            if (finalIntervals.back()[1] < intervals[i][1] ) {
                finalIntervals.push_back(intervals[i]);
            }
        }
    }
    return finalIntervals.size();
}

int main() {
    vector<vector<int>> intervals = {{1,4},{3,6},{2,8}};
    cout << removeCoveredIntervals(intervals);
    return 0;
}