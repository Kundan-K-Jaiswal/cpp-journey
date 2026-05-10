
// 860. Lemonade Change   |  Platform : LeetCode

// At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at
// a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, 
// or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer
// pays $5.
// Note that you do not have any change in hand at first.
// Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide 
// every customer with the correct change, or false otherwise.

// Example 1:
// Input: bills = [5,5,5,10,20]
// Output: true
// Explanation: 
// From the first 3 customers, we collect three $5 bills in order.
// From the fourth customer, we collect a $10 bill and give back a $5.
// From the fifth customer, we give a $10 bill and a $5 bill.
// Since all customers got correct change, we output true.

// Example 2:
// Input: bills = [5,5,10,10,20]
// Output: false
// Explanation: 
// From the first two customers in order, we collect two $5 bills.
// For the next two customers in order, we collect a $10 bill and give back a $5 bill.
// For the last customer, we can not give the change of $15 back because we only have two $10 bills.
// Since not every customer received the correct change, the answer is false.
 
// Constraints:
// 1 <= bills.length <= 10^5
// bills[i] is either 5, 10, or 20.




#include<iostream>
#include<vector>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
    int count5=0, count10=0, count20=0;
    for ( int val : bills ) {
        if ( val == 5 ) {
            count5++;
        } else if ( val == 10 ) {
            if ( count5 != 0 ) {
                count10++;
                count5--;
            } else {
                return false;
            }
        } else {
            if ( count10 >= 1 && count5 >= 1 ) {
                count20++;
                count10--;
                count5--;
            } else if ( count5 >= 3 ) {
                count20++;
                count5 -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
}


int main() {
    vector<int> bills = {5,5,10,10,20};
    cout << lemonadeChange(bills);
    return 0;
}



// Approach : Mathematical Logic

// Solution Core : We will keep the track of different bills in different variable -> c5, c10, c20 for 5, 10 & 20 
// respectively. If a customer pays a bill of 5 them simply increase the count of c5, if they pays a bill of 10 then
// check if the c5 is not 0 then we can give change to the customer so increase c10 and decrease c5, if it is 0 return 
// false , and if the customer pays a bill of 20 then check if there is atleast 1 bill of each 10 & 5 if so increase c20
// and decrease c5 & c10, if c10 is 0 then check if c5 has alteast 3 bills if yes update accordingly and if any condition
// fails return false, After the loop terminates return true

// Time Complexity : O(n) 
// Space Complexity : O(1)