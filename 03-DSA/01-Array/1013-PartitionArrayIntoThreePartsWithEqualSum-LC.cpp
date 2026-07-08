
// 1013. Partition Array Into Three Parts With Equal Sum  |  Platform : LeetCode

// Given an array of integers arr, return true if we can partition the array into three non-empty parts with equal sums.
// Formally, we can partition the array if we can find indexes i + 1 < j with 
// (arr[0] + arr[1] + ... + arr[i] == arr[i + 1] + arr[i + 2] + ... + arr[j - 1] == arr[j] + arr[j + 1] + ... + 
// arr[arr.length - 1])

// Example 1:
// Input: arr = [0,2,1,-6,6,-7,9,1,2,0,1]
// Output: true
// Explanation: 0 + 2 + 1 = -6 + 6 - 7 + 9 + 1 = 2 + 0 + 1

// Example 2:
// Input: arr = [0,2,1,-6,6,7,9,-1,2,0,1]
// Output: false

// Example 3:
// Input: arr = [3,3,6,5,-2,2,5,1,-9,4]
// Output: true
// Explanation: 3 + 3 = 6 = 5 - 2 + 2 + 5 + 1 - 9 + 4
 
// Constraints:
// 3 <= arr.length <= 5 * 10^4
// -10^4 <= arr[i] <= 10^4




#include<iostream>
#include<vector>
using namespace std;

bool canThreePartsEqualSum(vector<int>& arr) {

    int totalSum = 0;
    for(int val: arr ) {
        totalSum += val;
    }

    if (totalSum % 3 != 0) {
        return false;
    }

    int target = totalSum / 3;
    int sum = 0, count = 0;

    for (int val : arr) {
        sum += val;

        if (sum == target) {
            count++;
            sum = 0;
        }
    }

    return count >= 3;
}


int main() {
    vector<int> arr = {3,3,6,5,-2,2,5,1,-9,4};
    cout << canThreePartsEqualSum(arr);
    return 0;
}



// Approach : Traversal

// Solution Core : Firstly we will calculate the total sum, if the sum is not divisible by 3 then return false,
// if it is divisible by 3 then set the target to sum / 3, now traverse throught the array and check if the
// sum ( new variable ) on the left is equal to the target if yes set sum ( new variable ) to 0, and increase the 
// count by 1, at the end if the count is equal to 3 then return true else return false.

// Time Complexity : O(n) ; n = arr.size()
// Space Complexity : O(1)