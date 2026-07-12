
// 3986. Number of Elapsed Seconds Between Two Times  |  Platform : LeetCode

// You are given two valid times startTime and endTime, each represented as a string in the format "HH:MM:SS".
// Return the number of seconds that have elapsed from startTime to endTime.

// Example 1:
// Input: startTime = "01:00:00", endTime = "01:00:25"
// Output: 25
// Explanation:
// endTime is 25 seconds ahead of startTime.

// Example 2:
// Input: startTime = "12:34:56", endTime = "13:00:00"
// Output: 1504
// Explanation:
// endTime is 25 minutes and 4 seconds ahead of startTime, which equals 1504 seconds.


// Constraints:
// startTime.length == 8
// endTime.length == 8
// startTime and endTime are valid times in the format "HH:MM:SS"
// 00 <= HH <= 23
// 00 <= MM <= 59
// 00 <= SS <= 59
// endTime is not earlier than startTime




#include<iostream>
using namespace std;

int getHours ( string time ) {
    int t = 0;
    t = (time[0]-'0')*10 + (time[1]-'0');
    return t;
}

int getMinutes ( string time ) {
    int t = 0;
    t = (time[3]-'0')*10 + (time[4]-'0');
    return t;
}

int getSeconds ( string time ) {
    int t = 0;
    t = (time[6]-'0')*10 + (time[7]-'0');
    return t;
}

int secondsBetweenTimes(string startTime, string endTime) {
    int total_time = 0, t1, t2;

    t1 = getHours(startTime);
    t2 = getHours(endTime);

    if ( t1 != t2 ) {
        total_time += (t2-t1)*60*60;
    }

    t1 = getMinutes(startTime);
    t2 = getMinutes(endTime);

    if ( t1 != t2 ) {
        total_time += (t2-t1)*60;
    }


    t1 = getSeconds(startTime);
    t2 = getSeconds(endTime);
    
    total_time += (t2-t1);

    return total_time;
}

int main() {
    string startTime = "12:34:56", endTime = "13:00:00";
    cout << secondsBetweenTimes(startTime,endTime);
    return 0;
}