
// 832. Flipping an Image  |  Platform : LeetCode 

// Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
// To flip an image horizontally means that each row of the image is reversed.
// For example, flipping [1,1,0] horizontally results in [0,1,1].
// To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
// For example, inverting [0,1,1] results in [1,0,0].
 
// Example 1:
// Input: image = [[1,1,0],[1,0,1],[0,0,0]]
// Output: [[1,0,0],[0,1,0],[1,1,1]]
// Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
// Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

// Example 2:
// Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
// Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
// Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
// Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
 
// Constraints:
// n == image.length
// n == image[i].length
// 1 <= n <= 20
// images[i][j] is either 0 or 1.




#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

    int sz = image.size();
    int limit = ceil(sz/2.0);

    for ( auto &vect : image ) {
        for ( int i = 0; i<limit; i++ ) {
            if ( vect[i] == vect[sz-1-i]) {
                if ( vect[i] == 0 ) {
                    vect[i] = 1;
                    vect[sz-1-i] = 1;
                } else {
                    vect[i] = 0;
                    vect[sz-1-i] = 0;
                }
            }
        }
    }

    return image;
}


int main() {
    vector<vector<int>> image = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    vector<vector<int>> result = flipAndInvertImage(image);
    cout << "[ ";
    for ( auto v : result ) {
        cout << "[ ";
        for ( int val : v ) {
            cout << val << " ";
        }
        cout << "] ";
    }
    cout << "]";
    return 0;
}



// Approach : Mathematical Logic & Two Pointer

// Solution Core : Since, we need to invert as well as flip the image horizontally, what we will do is traverse the row
// from back as well as from the front at the same time and we will check if both of them are same then alter the value
// of both the element and if differnt do nothing ( explaination : flipping horizontally means simply reversing the elements 
// of the given array and fliping means to change their vlaue to the other, so doing it simultaneously will result in 
// if both are values are differnt then they will end up with no change and if same they will change their value )

// Time Complexity : O(n^2) 
// Space Complexity : O(1)