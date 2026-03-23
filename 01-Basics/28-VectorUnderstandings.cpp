#include<iostream>
#include<vector>
using namespace std;
int main() {

  // on pushing back the element the size increases but the capacity doubles if there is no space left for storing it.
  vector <int> vec;
  
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;

  vec.push_back(0);
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;

  vec.push_back(1);
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;

  vec.push_back(2);
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;

  vec.push_back(3);
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;

  vec.push_back(4);
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;

  vec.push_back(5);
  cout << "Size of vector = " << vec.size() << endl;
  cout << "Capacity of vector = " << vec.capacity() << endl;




  return 0;
}