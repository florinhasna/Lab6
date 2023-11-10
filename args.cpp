#include <iostream>
using namespace std;

void print_args(char *args_array[], int size);

int main(int argc, char *argv[]){

  // print file executed
  cout << "The program name is: " << argv[0] << endl;

  // print number of arguments
  cout << "called with " << argc - 1 << " arguments: ";
  
  // print arguments
  print_args(argv, argc);
  cout << endl;
  
  return 0;
}

// prints all arguments given, except the one on pos 0 which is file name
void print_args(char *args_array[], int size){
  for (int i = 1; i < size; i++){
    cout << "\'" << args_array[i] << "\'" << " ";
  }
}
