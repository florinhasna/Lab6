#include <iostream>
using namespace std;

void print_array(int array[], int size);

int main(){
  int numbers[] = {1, 2, 3};
  print_array(numbers, 3);
  return 0;
}

void print_array(int array[], int size){
  cout << "[";
  for(int i = 0; i < size; i++){
    // last iteration
    if (i == size - 1)
      cout << array[i];
    else
      cout << array[i] << ", ";
  }
  cout << "]" << endl;
}
