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

void bubble_sort(int *arr, int size){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(arr[j] < arr[j - 1]){
        swap_values(arr, j - 1, j);
      }
    }
  }
}

int main()
{
  int numbers[8] = { 50, 34, 234, 122, 35, 999, 3, 89 };
  int size = sizeof(numbers)/sizeof(*numbers);

  cout << "\nUnsorted Array" << endl;

  print_array(numbers, size);
  bubble_sort(numbers, size);

  cout << "\nSorting via BubbleSort" << endl;

  print_array(numbers, size);
  return 0;
}