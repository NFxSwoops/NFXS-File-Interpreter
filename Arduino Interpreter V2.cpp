#include <iostream> //remove line
using namespace std; //remove line
int main() {
  int setPos = 1; // the position the varaibles are currently being filled into 
  float placeholder; // To hold what data is selected
  int xPos; // xPos the machine needs to move too
  int yPos; //yPos the machine needs to move too
  int drillSpeed; //gantry down for machine
  int i = 0;
  float NFXSFile[16] = {000,000,000,000,200,000,200,200,000,000,200,000,000,000,000,731}; // the set of instruction the machine is going to parse through to get the data to the gantry.


  
  while(placeholder != 731) {
    placeholder = NFXSFile[i];
    if (placeholder != 731) {
      std::cout << placeholder << "\n"; //replace with serial.print(placeholder);
      if (setPos == 1){
        xPos = placeholder;
        setPos = 2;
      } else if (setPos == 2) {
        yPos = placeholder;
        setPos = 3;
      } else {
        drillSpeed = placeholder;
        setPos = 1;
      }
    }
    i++;
  }
  return 0;
}