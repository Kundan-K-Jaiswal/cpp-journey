#include<iostream>
#include<vector>
using namespace std;
int main() {

  // Vector Initialization :
  // 1. Empty Vector
  vector<int>vec1;
  // cout << vec1[0];  // Gives Error
  cout<< sizeof(vec1) << endl;  // to find the size of a vector we use .size()


  // 2. Vector with some values
  vector<int>vec2 = { 1,2,3,4 ,6,4 }; // size = 3
  cout << vec2[1] << endl;
  cout << sizeof(vec2) << endl;    // to find the size of vector we use size function instead of sizeof function


  // 3. Vector with size and same value at every index
  vector<int>vec3(4,0); // creates an vector of size 4 and each index contains the value 0
  cout << vec3[2];



  // for each loop for vectors
  for(int i : vec2) {  // here i stores the value at the indexes not the indices
    cout << i << endl;
  }

  return 0;
}