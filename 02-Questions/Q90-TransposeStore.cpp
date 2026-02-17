// Write a program to store the transpose of the matrix entered by the user into a new matrix.

#include <iostream>
using namespace std;
int main()
{

  int m, n;
  cout << "Enter the dimentions ( m & n ) of your matrix : ";
  cin >> m >> n;

  int arr1[m][n], arr2[n][m];

  //Taking input for the original matrix
  cout << "Enter the elements of your matrix : " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr1[i][j];
    }
  }

  //Printing Original Matrix
  cout << "Original matrix : " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }
  cout<< endl;

  //Code to store transpose the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr2[i][j] = arr1[j][i];
    }
  }

  //Printing Transposed Matrix
  cout << "Transposed Matrix : " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}