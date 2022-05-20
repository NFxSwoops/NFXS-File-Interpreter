#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
  int setPos = 1;
  string placeholder; // To hold file input
  int xPos; // Makes the variable "inputFile" a actual File
  int yPos;
  int drillSpeed;

  string NFXSFile = "000 000 000 000 200 000 200 200 000 000 200 000 000 000 000 end";
   //asks the user for the name of the file

  int i = 0;
  while(placeholder != "end") {
    placeholder = NFXSFile.substr(i,3);
    if (placeholder != "end") {
      cout << placeholder << "\n";
      if (setPos == 1){
        xPos = stoi(placeholder);
      } else if (setPos == 2) {
        yPos = stoi(placeholder);
      } else {
        drillSpeed = stoi(placeholder);
        setPos = 1;
      }
    }
    i = i + 4;
  }
  return 0;
}
