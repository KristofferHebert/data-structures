#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

void combine_arrs(int * arr, int begin_arr_one, int begin_arr_two, int end_arr_one, int end_arr_two) {
  int size = end_arr_two - begin_arr_one + 1;
  int left = begin_arr_one;
  int right = end_arr_one;
  int tmp[size];

  for (int i = 0; i < size; ++i) {
    if (left > begin_arr_two)
      tmp[i] = arr[right++];
    else if (right > end_arr_two)
      tmp[i] = arr[left++];
    else if (arr[left] <= arr[right])
      tmp[i] = arr[left++];
    else
      tmp[i] = arr[right++];
  }

  for (int i = 0; i < size; ++i) {
    arr[begin_arr_one++] = tmp[i];
  }
}

void merge_sort(int * arr, int begin, int end) {
  if (begin > end) {
    return;
  }
  int middle = (begin + end) / 2;
  int next = middle + 1;
  merge_sort(arr, begin, middle);
  merge_sort(arr, next, end);
  combine_arrs(arr, begin, middle, next, end);

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

  cout << "\nSorting via Merge sort..." << endl;

  merge_sort(numbers, 0, size);

  print_array(numbers, size);

  return 0;
}