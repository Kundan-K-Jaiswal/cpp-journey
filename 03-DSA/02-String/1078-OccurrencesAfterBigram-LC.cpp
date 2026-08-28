
// 1078. Occurrences After Bigram  |  Platform : LeetCode


// Given two strings first and second, consider occurrences in some text of the form "first second third", where second
// comes immediately after first, and third comes immediately after second.
// Return an array of all the words third for each occurrence of "first second third".


// Example 1:
// Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
// Output: ["girl","student"]


// Example 2:
// Input: text = "we will we will rock you", first = "we", second = "will"
// Output: ["we","rock"]
 

// Constraints:
// 1 <= text.length <= 1000
// text consists of lowercase English letters and spaces.
// All the words in text are separated by a single space.
// 1 <= first.length, second.length <= 10
// first and second consist of lowercase English letters.
// text will not have any leading or trailing spaces.




#include<iostream>
#include<vector>
using namespace std;

vector<string> findOcurrences(string text, string first, string second) {
    vector<string> texts, result;
    string word = "";
    for ( int i = 0; i < text.length(); i++ ) {
        if ( text[i] == ' ' ) {
            texts.push_back(word);
            word = "";
        } else {
            word.push_back(text[i]);
        }
    }
    texts.push_back(word);

    for ( int i = 0; i < texts.size()-2; i++ ) {
        if ( texts[i] == first && texts[i+1] == second ) {
            result.push_back(texts[i+2]);
        }
    }
    return result;
}

int main() {
    string text = "alice is a good girl she is a good student", first = "a", second = "good";
    vector<string> result = findOcurrences(text, first, second);
    for ( string s : result ) {
        cout << s << " ";
    }
    return 0;
}