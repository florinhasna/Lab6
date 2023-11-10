#include <iostream>
using namespace std;

void print_array(int array[], int size);
// function to swap the elements on pos1 and pos2
int* swap_array(int array[], int pos1, int pos2);

int main(){
  int numbers[] = {1, 2, 3};
  // print array before swap
  print_array(numbers, 3);
  // swap elements
  int *swapped_array = swap_array(numbers, 0, 1);
  // print after swap
  print_array(swapped_array, 3);

  delete[] swapped_array;
  swapped_array = nullptr;
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

int* swap_array(int array[], int pos1, int pos2){
  // store element on pos2
  int temp = array[pos2];

  //swap elements
  array[pos2] = array[pos1];
  array[pos1] = temp;

  return array;
}
