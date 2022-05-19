#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
  string filePath;
  string input; // To hold file input
  fstream inputFile; // Makes the variable "inputFile" a actual File

  cout << "Please enter a file path: ";
  cin >> filePath;
   //asks the user for the name of the file
  inputFile.open(filePath, ios::in); // Open the file in input mode.

  if (inputFile) { // If the file was successfully opened, continue.

    getline(inputFile, input); // Read an item from the file.

    while(!inputFile.eof()) {
      for (int i = 0; i < 9; i = i + 4) {
        cout << input.substr(i,3) << "\n";
      }
      getline(inputFile, input);
    }
  inputFile.close();
  } else { // If the file fails to open
    cout << "error";
  }
  return 0;
}
