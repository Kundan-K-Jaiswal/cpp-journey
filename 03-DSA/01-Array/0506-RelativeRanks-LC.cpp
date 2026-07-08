
// 506. Relative Ranks | Platform : LeetCode 

// You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. 
// All the scores are guaranteed to be unique.
// The athletes are placed based on their scores, where the 1st place athlete has the highest score, 
// the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:
// The 1st place athlete's rank is "Gold Medal".
// The 2nd place athlete's rank is "Silver Medal".
// The 3rd place athlete's rank is "Bronze Medal".
// For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's 
// rank is "x").
// Return an array answer of size n where answer[i] is the rank of the ith athlete.

// Example 1:
// Input: score = [5,4,3,2,1]
// Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
// Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].

// Example 2:
// Input: score = [10,3,8,9,4]
// Output: ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
// Explanation: The placements are [1st, 5th, 3rd, 2nd, 4th].

// Constraints:
// n == score.length
// 1 <= n <= 10^4
// 0 <= score[i] <= 10^6
// All the values in score are unique.




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {

    int n = score.size();

    // making pair of value & it's original index
    vector<pair<int,int>> sortedScores;
    for( int i = 0; i<n; i++ ) {
        sortedScores.push_back({score[i],i});
    }
    
    sort(sortedScores.rbegin(), sortedScores.rend());

    vector<string> ans(n);

    for ( int i = 0; i<n; i++ ) {
        int ind = sortedScores[i].second; // original index
        if ( i == 0 ) {
            ans[ind] = "Gold Medal";
        } else if ( i == 1 ) {
            ans[ind] = "Silver Medal";
        } else if ( i == 2 ) {
            ans[ind] = "Bronze Medal";
        } else {
            ans[ind] = to_string(i + 1);
        }
    }

    return ans;
}

int main() {
    vector<int> score = {10,3,8,9,4};
    vector<string> result = findRelativeRanks(score);
    cout << "[ "; 
    for ( string val : result ) {
        cout << "`" << val << "` " ;
    }
    cout << "]";
    return 0;
}



// Approach : Pair

// Solution Core : We will create a pair of data and its original index, and sort it according to the data. Now,
// we will traverse through the sorted vector and place "Gold" at the original index of the first node, similarly
// silver and bronze for second and third respectively & rest of them as index ( of sorted vector ) + 1 at their 
// original position

// Time Complexity : O(nlog(n))
// Space Complexity : O(n)