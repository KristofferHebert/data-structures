#include <iostream> 
using namespace std;

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

void switch(int left, int right, int * arr) {
  if (arr[left] != arr[right]) {
    int tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
  }
}

void quick_sort(int * arr, int left, int right) {
  int min = (left + right) / 2;

  int i = left;
  int j = right;
  int middle = arr[min];

  while (left < j || i < right) {
    while (arr[j] > middle){
      j--;
    }
    while (arr[i] < middle){
      i++;
    }
    if (i <= j) {
      switch(i, j, arr);
      i++;
      j--;
    } else {
      if (left < j){
        quick_sort(arr, left, j);
      }
      if (i < right){
        quick_sort(arr, i, right);
      }
      return;
    }
  }
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

  cout << "\nSorting via quick sort..." << endl;

  quick_sort(numbers, 0, size);

  print_array(numbers, size);

  //quick_sort(numbers, size);
  return 0;
}
