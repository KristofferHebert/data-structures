#include <iostream>
using namespace std;

void swap_values(int *arr, int left, int right){
  int tmp = arr[left];
  arr[left] = arr[right];
  arr[right] = tmp;
  return;
}

void print_array(int *arr, int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << endl;
  }
}

void insert(int *arr, int begin, int end){
  bool finish = false;
  int current_index = end;
  bool more = (current_index != begin);
  while (more && !finish){
    if(arr[current_index] < arr[current_index - 1]){
      cout << "started" << endl;
      swap_values(arr, begin, end -1);
      current_index--;
      more = (current_index != begin);
    } else {
      cout << "finished" << endl;
      finish = true;
    }
  }
  return;
}
void insertion_sort(int *arr, int size){
  for(int i = 0; i < size; i++){
    insert(arr, 0, i);
  }
}

int main()
{
  int numbers[8] = { 50, 34, 234, 122, 35, 999, 3, 89 };
  int size = sizeof(numbers)/sizeof(*numbers);

  cout << "\nUnsorted Array" << endl;

  print_array(numbers, size);
  insertion_sort(numbers, size);

  cout << "\nSorting via InsertionSort" << endl;

  print_array(numbers, size);
  return 0;
}