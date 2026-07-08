

// 804. Unique Morse Code Words  |  Platform : LeetCode

// International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, 
// as follows:

// 'a' maps to ".-",
// 'b' maps to "-...",
// 'c' maps to "-.-.", and so on.

// For convenience, the full table for the 26 letters of the English alphabet is given below:
// [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...",
// "-","..-","...-",".--","-..-","-.--","--.."]

// Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

// For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call 
// such a concatenation the transformation of a word. Return the number of different transformations among all words we have.

// Example 1:
// Input: words = ["gin","zen","gig","msg"]
// Output: 2
// Explanation: The transformation of each word is:
// "gin" -> "--...-."
// "zen" -> "--...-."
// "gig" -> "--...--."
// "msg" -> "--...--."
// There are 2 different transformations: "--...-." and "--...--.".

// Example 2:
// Input: words = ["a"]
// Output: 1
 
// Constraints:
// 1 <= words.length <= 100
// 1 <= words[i].length <= 12
// words[i] consists of lowercase English letters.




#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {

    int sz = words.size();
    if ( sz == 1 ) {
        return 1;
    }

    vector<string> code = {
        ".-","-...","-.-.","-..",".","..-.","--."
        ,"....","..",".---","-.-",".-..","--","-.",
        "---",".--.","--.-",".-.","...","-","..-",
        "...-",".--","-..-","-.--","--.."
        };

    vector<string> morseCode;

    for ( string word : words ) {
        string str;
        for ( auto letter : word ) {
            int ind = letter - 97;
            str += code[ind];
        }
        morseCode.push_back(str);
    }

    sort(morseCode.begin(),morseCode.end());
    
    int uniqueCount = 1;

    for ( int i = 1; i<morseCode.size(); i++ ) {
        if(morseCode[i-1] != morseCode[i]) {
            uniqueCount++;
        }
    }

    return uniqueCount;
}


int main() {
    vector<string> words = {"gin","zen","gig","msg"};
    cout << uniqueMorseRepresentations(words);
    return 0;
}



// Approach : Mapping

// Solution Core : We will create a vector of string that will contain the morse code for each alphabet, now we will
// traverse throught the given letter in words and create a string of morse code by mapping into the vectors index
// position. After that we will add the string into our result vector and then sort it and count the unique codes.

// Time Complexity : O(m*n) -> m = no. of words, n = no. of letters in words 
// Space Complexity : O(m*n) -> m = no. of words, n = no. of letters in words 