
// 645. Set Mismatch  |  Platform : LeetCode 

// You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error,
// one of the numbers in s got duplicated to another number in the set, which results in repetition of one number 
// and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form of an array.

// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1]
// Output: [1,2]

// Constraints:
// 2 <= nums.length <= 10^4
// 1 <= nums[i] <= 10^4




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    int sz = nums.size(), sum = 0, duplicate;

    for ( int i = 0; i<sz-1; i++ ) {
        sum += nums[i];
        if ( nums[i] == nums[i+1]) { // finding duplicate element
            duplicate = nums[i];
        }
    }

    sum += nums[sz-1] - duplicate;

    int totalSum = (sz * (sz+1))/2;

    return {duplicate, (totalSum - sum)};

}



int main() {
    vector<int> nums = {1,2,2,4};
    vector<int> result = findErrorNums(nums);
    cout << "[ " << result[0] << ", " << result[1] << " ]";
    return 0;
}



// Approach : Algebric Formula

// Solution Core : Sort the given array and find the duplicate element, now calculate the total sum of the values in given
// array and then also calculate the expected sum if there was no error by using algebric formula for sum of n elements, now 
// 'expected sum - calculated sum - duplicate' value will give us the missing value in the element.

// Time Complexity : O(n(log(n))) 
// Space Complexity : O(1)