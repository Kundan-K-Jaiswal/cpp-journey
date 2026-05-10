
// 605. Can Place Flowers  |  Platform : LeetCode

// You have a long flowerbed in which some of the plots are planted, and some are not. 
// However, flowers cannot be planted in adjacent plots.
// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, 
// and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers 
// rule and false otherwise.

// Example 1:
// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true

// Example 2:
// Input: flowerbed = [1,0,0,0,1], n = 2
// Output: false
 
// Constraints:
// 1 <= flowerbed.length <= 2 * 10^4
// flowerbed[i] is 0 or 1.
// There are no two adjacent flowers in flowerbed.
// 0 <= n <= flowerbed.length




#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    int count = 0, sz = flowerbed.size();

    if ( n == 0 ) {
        return true;
    }
    
    if ( sz == 1 ) { // for single valued array
        if ( n == 1 && flowerbed[0] == 0 ) {
            return true;
        }
        return false;
    }

    for ( int i = 0; i<sz; i++ ) {
        if (flowerbed[i] == 0 ) { 
            if ( i == 0 ) { // for first index ( corner case )
                if ( flowerbed[i+1] == 0 ) { 
                    count++;
                    flowerbed[i] = 1;
                } 
            } else if ( i == sz-1 ) {
                if ( flowerbed[sz-2] == 0 ) { // for last index ( corner case )
                    count++;
                    flowerbed[i] = 1;
                } 
            } else if ( flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                count++;
                flowerbed[i] = 1;
            } 
        }
        if ( count == n ) {
            return true;
        }
    }

    return false;
}



int main() {
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 2;
    cout << canPlaceFlowers(flowerbed,n);
    return 0;
}



// Approach : Array Traversal

// Solution Core : For the first and last index ( if they are 0 ), we will check if the second and second last index value 
// if also 0 or not if yes we can plant a flower else we can't plant a flower there, for other indices ( if it is 0 ) 
// we will check the value at previous and next value to be 0 inorder to plant a flower.

// Time Complexity : O(n) 
// Space Complexity : O(1)