
// 3606. Coupon Code Validator     |  Platform : LeetCode

// You are given three arrays of length n that describe the properties of n coupons: code, businessLine, 
// and isActive. The ith coupon has:
// code[i]: a string representing the coupon identifier.
// businessLine[i]: a string denoting the business category of the coupon.
// isActive[i]: a boolean indicating whether the coupon is currently active.

// A coupon is considered valid if all of the following conditions hold:
// code[i] is non-empty and consists only of alphanumeric characters (a-z, A-Z, 0-9) and underscores (_).
// businessLine[i] is one of the following four categories: "electronics", "grocery", "pharmacy", "restaurant".
// isActive[i] is true.
// Return an array of the codes of all valid coupons, sorted first by their businessLine in the order: "electronics", 
// "grocery", "pharmacy", "restaurant", and then by code in lexicographical (ascending) order within each category.

// Example 1:
// Input: code = ["SAVE20","","PHARMA5","SAVE@20"], businessLine = ["restaurant","grocery","pharmacy","restaurant"], 
// isActive = [true,true,true,true]
// Output: ["PHARMA5","SAVE20"]
// Explanation:
// First coupon is valid.
// Second coupon has empty code (invalid).
// Third coupon is valid.
// Fourth coupon has special character @ (invalid).

// Example 2:
// Input: code = ["GROCERY15","ELECTRONICS_50","DISCOUNT10"], 
// businessLine = ["grocery","electronics","invalid"], isActive = [false,true,true]
// Output: ["ELECTRONICS_50"]
// Explanation:
// First coupon is inactive (invalid).
// Second coupon is valid.
// Third coupon has invalid business line (invalid).
 
// Constraints:
// n == code.length == businessLine.length == isActive.length
// 1 <= n <= 100
// 0 <= code[i].length, businessLine[i].length <= 100
// code[i] and businessLine[i] consist of printable ASCII characters.
// isActive[i] is either true or false.



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isBusinessLine ( const string& BusinessLine ) {
    if (BusinessLine == "electronics" || 
        BusinessLine == "grocery" || 
        BusinessLine == "pharmacy" || 
        BusinessLine == "restaurant"
    ) {
        return true;
    }
    return false;
}

bool isCode ( const string& code ) {
    if ( code.length() == 0 ) {
        return false;
    } else {
        for ( char letter : code ) {
            if (letter == '_') {
                continue;
            }
            if ( !isalnum(letter) ) {
                return false;
            }
        }
        return true;
    }
}

vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
    vector<pair<int,string>> res;
    for ( int i = 0; i<code.size(); i++ ) {
        if ( isActive[i] && isBusinessLine(businessLine[i]) && isCode(code[i])) {
            int priority; // "electronics", "grocery", "pharmacy", "restaurant"
            if ( businessLine[i] == "electronics") {
                priority = 0;
            } else if ( businessLine[i] == "grocery" ) {
                priority = 1;
            } else if ( businessLine[i] == "pharmacy" ) {
                priority = 2;
            } else {
                priority = 3;
            }

            res.push_back({priority,code[i]});
        }
    }
    
    sort(res.begin(),res.end());

    vector<string> result;
    for ( auto p: res ) {
        result.push_back(p.second);
    }
    return result;
}


int main() {
    vector<string> code = {"SAVE20","","PHARMA5","SAVE@20"}, businessLine = {"restaurant","grocery","pharmacy","restaurant"};
    vector<bool> isActive = {true,true,true,true};
    vector<string> res = validateCoupons(code,businessLine,isActive);
    for ( auto s : res ) {
        cout << s << " ";
    }
    return 0;
}