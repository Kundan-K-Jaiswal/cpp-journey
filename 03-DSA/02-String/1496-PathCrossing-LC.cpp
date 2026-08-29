
// 1496. Path Crossing  |  Platform : LeetCode


// Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or 
// west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.
// Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously 
// visited. Return false otherwise.

 
// Example 1:
// Input: path = "NES"
// Output: false 
// Explanation: Notice that the path doesn't cross any point more than once.


// Example 2:
// Input: path = "NESWW"
// Output: true
// Explanation: Notice that the path visits the origin twice.
 

// Constraints:
// 1 <= path.length <= 10^4
// path[i] is either 'N', 'S', 'E', or 'W'.




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPathCrossing(string path) {
    pair<int,int> start = {0,0};
    vector<pair<int,int>> covered;
    covered.push_back(start);
    for ( char ch : path ) {
        switch(ch) {
            case 'N':
                start.second++;
                break;
            case 'S':
                start.second--;
                break;
            case 'E':
                start.first++;
                break;
            case 'W':
                start.first--;
                break;
        };
        auto it = find(covered.begin(),covered.end(),start);
        if ( it != covered.end() ) {
            return true;
        }
        covered.push_back(start);
    }
    return false;
}

int main() {
    string path = "NESWW";
    cout << isPathCrossing(path);
    return 0;
}