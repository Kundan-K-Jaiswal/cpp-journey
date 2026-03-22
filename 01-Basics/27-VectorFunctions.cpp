#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
  vector <int> vec = {1,2,3,4,5,6};
  vector <int> nums1 = {1,2,3,4,5,6};
  vector <int> nums2 = {7,8,9,10,11};

  for( int val : vec ) {
    cout << val << " ";
  }
  cout << endl;


  
  // Vector Functions 
  // 1. Size 
  cout << "Size of the vector = " << vec.size() << endl;

  // 2. Push Back
  vec.push_back(37);
  vec.push_back(109);
  vec.push_back(7);
  
  for( int val : vec ) {
    cout << val << " ";
  }
  cout << endl;


  // 3. Pop Back
  vec.pop_back();
  for( int val : vec ) {
    cout << val << " ";
  }
  cout << endl;


  // 4. Front
  cout << "first value : " << vec.front() << endl;

  


  // 5. Back
  cout << "last value : " << vec.back() << endl;



  // 6. At
  cout << "Value at 3 : " << vec.at(3);



  // 7. Insert
  nums1.insert(nums1.end(), nums2.begin(), nums2.end());

  return 0;
}