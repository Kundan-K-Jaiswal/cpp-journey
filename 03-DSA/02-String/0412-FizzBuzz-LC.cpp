
// 412. Fizz Buzz  |  Platform : LeetCode

// Given an integer n, return a string array answer (1-indexed) where:
// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.
 

// Example 1:
// Input: n = 3
// Output: ["1","2","Fizz"]

// Example 2:
// Input: n = 5
// Output: ["1","2","Fizz","4","Buzz"]

// Example 3:
// Input: n = 15
// Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
 

// Constraints:
// 1 <= n <= 10^4




#include<iostream>
#include<vector>
using namespace std;

string check (int n) {
    if ( n % 3 == 0 && n % 5 == 0 ) {
        return "FizzBuzz";
    } else if ( n % 3 == 0 ) {
        return "Fizz";
    } else if ( n % 5 == 0 ) {
        return "Buzz";
    } else {
        return to_string(n);
    }
}

vector<string> fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i <= n; i++ ) {
        res.push_back(check(i));
    }
    return res;
}

int main() {
    int n = 15;
    vector<string> result = fizzBuzz(n);
    for ( string s : result ) {
        cout << s << " ";
    }
    return 0;
}