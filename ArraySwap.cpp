#include <iostream>
using namespace std;

// a function that swaps the element on pos1 to pos2
void swap_array(int array[], int pos1, int pos2);

int main(){
  int my_array[] = {1, 2, 3};
  swap_array(my_array, 0, 1);
  return 0;
}

void swap_array(int array[], int pos1, int pos2){
  // hold the element on pos2 temporarily
  int temp = array[pos2];

  // swap elements
  array[pos2] = array[pos1];
  array[pos1] = temp;
}

