
// 997. Find the Town Judge  |  Platform : LeetCode

// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:
// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.

// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person 
// labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

// Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

// Example 1:
// Input: n = 2, trust = [[1,2]]
// Output: 2

// Example 2:
// Input: n = 3, trust = [[1,3],[2,3]]
// Output: 3

// Example 3:
// Input: n = 3, trust = [[1,3],[2,3],[3,1]]
// Output: -1
 
// Constraints:
// 1 <= n <= 1000
// 0 <= trust.length <= 10^4
// trust[i].length == 2
// All the pairs of trust are unique.
// ai != bi
// 1 <= ai, bi <= n




#include<iostream>
#include<vector>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {

    vector<int> trustScore(n+1, 0);

    for (auto t : trust) {
        trustScore[t[0]]--;  // trusts someone
        trustScore[t[1]]++;  // is trusted
    }

    for (int i = 1; i <= n; i++) {
        if (trustScore[i] == n - 1)
            return i;
    }

    return -1;
}


int main() {
    int n = 3;
    vector<vector<int>> trust = {{1,3},{2,3},{3,1}};
    cout << findJudge(n,trust);
    return 0;
}



// Approach : Traversal

// Solution Core : We will increase the count of n if it is being trusted and reduce the count of n is n trusts someone,
// at the end we will check if any of the index has n-1 number of trust then return that index because he is the judge.

// Time Complexity : O(n)
// Space Complexity : O(n)