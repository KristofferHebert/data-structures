#include <iostream> 
using namespace std;

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

void selection_sort(int * arr, int end) {
  
  for(int i = 0; i < end - 1; i++){
    int current_index = i;
    for(int j = i + 1; j < end; j++){
      if( arr[j] < arr[current_index]){
         current_index = j;
      }
      
      int tmp = arr[i];
      arr[i] = arr[current_index];
      arr[current_index] = tmp;
    }
  }
  return;
}

int main() {

  int numbers[8] = {
    50,
    34,
    234,
    122,
    35,
    999,
    3,
    89
  };
  int size = sizeof(numbers) / sizeof(numbers[0]);

  cout << "\nUnsorted list..." << endl;

  print_array(numbers, size);

  cout << "\nSorting via selection sort..." << endl;

  selection_sort(numbers, size);

  print_array(numbers, size);

  return 0;
}