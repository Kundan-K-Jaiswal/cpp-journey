
// 495. Teemo Attacking | Platform : LeetCode 

// Our hero Teemo is attacking an enemy Ashe with poison attacks! When Teemo attacks Ashe, Ashe gets poisoned for a 
// exactly duration seconds. More formally, an attack at second t will mean Ashe is poisoned during the inclusive 
// time interval [t, t + duration - 1]. If Teemo attacks again before the poison effect ends, the timer for it is 
// reset, and the poison effect will end duration seconds after the new attack. You are given a non-decreasing integer 
// array timeSeries, where timeSeries[i] denotes that Teemo attacks Ashe at second timeSeries[i], 
// and an integer duration.
// Return the total number of seconds that Ashe is poisoned.

// Example 1:
// Input: timeSeries = [1,4], duration = 2
// Output: 4
// Explanation: Teemo's attacks on Ashe go as follows:
// - At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
// - At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
// Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total.

// Example 2:
// Input: timeSeries = [1,2], duration = 2
// Output: 3
// Explanation: Teemo's attacks on Ashe go as follows:
// - At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
// - At second 2 however, Teemo attacks again and resets the poison timer. Ashe is poisoned for seconds 2 and 3.
// Ashe is poisoned for seconds 1, 2, and 3, which is 3 seconds in total.

// Constraints:
// 1 <= timeSeries.length <= 10^4
// 0 <= timeSeries[i], duration <= 10^7
// timeSeries is sorted in non-decreasing order.





#include<iostream>
#include<vector>
using namespace std;

int findPoisonedDuration(vector<int>& timeSeries, int duration) {

    if ( timeSeries.empty()) return 0;

    int totalDuration = 0;

    for ( int i = 0; i < timeSeries.size() - 1; i++ ) {
        if ( timeSeries[i] + duration-1 < timeSeries[i+1]) {
            totalDuration += duration;
        } else {
            totalDuration += timeSeries[i+1] - timeSeries[i];
        }
    }
    
    totalDuration += duration;
    return totalDuration;

}

int main() {
    vector<int> timeSeries = {1,2};
    int duration = 2;
    cout << findPoisonedDuration(timeSeries,duration);
    return 0;
}



// Approach : Array Traversal

// Solution Core : We will create a variable totalDuration that will store the duration that Ashe is poisoned
// if the next attack is done after the duration time then simply add the duraion in totalDuration & if 
// the attach is done before the poison effect is over then add next attack - current attack ( this will give us 
// the duration for which Ashe is poisoned )

// Time Complexity : O(n)
// Space Complexity : O(1)