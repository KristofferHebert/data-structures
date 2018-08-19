#include <iostream>
using namespace std;

void print_array(int *arr, int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << endl;
  }  
} 

void insertion_sort(int *arr, int size){
  for(int i = 0; i < size; i ++){
    int tmp;
    for (int j = i; 0 < j && (arr[j] < arr[j - 1]); j--) {
        tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
    }
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