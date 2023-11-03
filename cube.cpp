#include <iostream>
using namespace std;

int cube(int aNumber);

int main(){
  // get the input
  cout << "Enter a number: ";
  int input;
  cin >> input;

  // print the cube of the input
  cout << "The cube of " << input << " is " << cube(input); 
  return 0;
}

// returns cube of a number
int cube(int aNumber){
  int computedCube = aNumber * aNumber * aNumber;
  return computedCube;
}
