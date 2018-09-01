#include <iostream> 
using namespace std;

// Iterateive function that loops over items in array
void iterative_print(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

// Recursive function is a function that calls itself
void recursive_direct_print(int arr[], int index, int size){
  if(size != index){
    cout << arr[index] << endl;
    index++;
    recursive_direct_print(arr, index, size);     
  } 
  return;
}

int main() {

  int numbers[8] = { 50, 34, 234, 122, 35, 999, 3, 89 };
  int size = sizeof(numbers)/sizeof(*numbers);

  cout << "\nIterative Print" << endl;
  iterative_print(numbers, size);

  cout << "\nDirect Recursion Print" << endl;
  recursive_direct_print(numbers, 0, size);

  return 0;
}
