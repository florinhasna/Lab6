#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

  cout << "The program name is: " << argv[0] << endl;

  cout << "called with " << argc - 1 << " arguments: "; 
  
  return 0;
}
