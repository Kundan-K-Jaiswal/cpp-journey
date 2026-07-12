
// 1436. Destination City  |  Platform : LeetCode

// You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from 
// cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

// It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one
//  destination city.


// Example 1:
// Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
// Output: "Sao Paulo" 
// Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. 
// Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".

// Example 2:
// Input: paths = [["B","C"],["D","B"],["C","A"]]
// Output: "A"
// Explanation: All possible trips are: 
// "D" -> "B" -> "C" -> "A". 
// "B" -> "C" -> "A". 
// "C" -> "A". 
// "A". 
// Clearly the destination city is "A".

// Example 3:
// Input: paths = [["A","Z"]]
// Output: "Z"
 

// Constraints:
// 1 <= paths.length <= 100
// paths[i].length == 2
// 1 <= cityAi.length, cityBi.length <= 10
// cityAi != cityBi
// All strings consist of lowercase and uppercase English letters and the space character.




#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

string destCity(vector<vector<string>>& paths) {

    unordered_map<string,string> route;

    for ( auto v : paths ) {
        route[v[0]] = v[1];
    }
    
    string city = paths[0][0];
    while ( route[city] != "" ) {
        city = route[city];
    }

    return city;
}

int main() {
    vector<vector<string>> paths = {{"B","C"},{"D","B"},{"C","A"}};
    cout << destCity(paths);
    return 0;
}