#include <iostream>
using namespace std;

void print_args(char *args_array[], int size);

int main(int argc, char *argv[]){

  cout << "The program name is: " << argv[0] << endl;

  cout << "called with " << argc - 1 << " arguments: ";
  print_args(argv, argc);
  cout << endl;
  
  return 0;
}

void print_args(char *args_array[], int size){
  for (int i = 1; i < size; i++){
    cout << args_array[i] << " ";
  }
}
