//31. Write a program to sort five user entered strings into alphabetical order. Use dynamic memory allocation to store strings.
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  const int numStrings = 5;

  // Allocate memory for pointers to strings
  string* strings = new string[numStrings];

  // Get user input for each string
  for (int i = 0; i < numStrings; ++i) {
    cout << "Enter string " << i + 1 << ": ";
    getline(cin, strings[i]);
  }

  // Sort the array of strings using std::sort
  sort(strings, strings + numStrings); //start index, end index
  cout<<strings[0];			       

  // Print the sorted strings
  cout << "\nSorted strings:\n";
  for (int i = 0; i < numStrings; ++i) {
    cout << strings[i] << endl;
  }

  // Deallocate memory
  delete[] strings;

  return 0;
}
