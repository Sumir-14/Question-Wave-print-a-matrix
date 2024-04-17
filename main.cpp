#include <iostream>
#include<vector>
using namespace std;

// This function prints the elements of a 2D vector in a wave-like pattern.
int waveprint(vector<vector<int>> v) {
  // Get the number of rows and columns in the vector.
  //For rows
  int m = v.size();
  //for columns
  int n = v[0].size();

  // Iterate over the columns of the vector.
  for (int i = 0; i < n; i++) {
    // If the column is even, print the elements from top to bottom.
    //condition for even
    if (i % 2 == 0) {
      for (int j = 0; j < m; j++) {
        // Print the element.
        cout << v[j][i] << " ";
      }
    }
    // If the column is odd, print the elements from bottom to top.
    else {
      for (int j = m - 1; j >= 0; j--) {
        cout << v[j][i] << " ";
      }
    }
  }

  // Return 0 to indicate that the program ran successfully.
  return 0;
}

// This is the main function of the program.
int main() {
  // Create a 2D vector.
  vector<vector<int>> v{
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  // Print the elements of the vector in a wave-like pattern.
  //func call.
  waveprint(v);

  // Return 0 to indicate that the program ran successfully.
  return 0;
}