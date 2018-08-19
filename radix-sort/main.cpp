#include <iostream>
#include <string>

using namespace std;

void print_array(int * arr, int size) {
  for (int i = 0; i < size; i++) {
    if(isempty(arr[i]){
      cout << arr[i] << endl;

    } 
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

int highest(int *arr, int size){
  int highest = 0;
  for(int i = 0; i < size; i++){
    if(highest < arr[i]){
      highest = arr[i];
    }
  }
  return highest;
}

int get_digits(int number){
  int digits = 0;
  if(number < 9) {
    return 1;
  }
  while(number != 0){
    number /= 10;
    digits++;
  }
  return digits;
}

int get_last_digit(int number){
  return number % 10;
}

void sort_by_lastnumber(int * arr, int number, int size){
    for(int i = 0; i < size; i++){
      if(arr[i] < number){
        arr[i] = number;
        break;
      }
    }
    return;
    //arr_matrix[max_digits - 1][i] = arr[i];
}

void radix_sort(int * arr, int size) {
  int highest_number = highest(arr, size);
  int max_digits = get_digits(highest_number);
  int arr_matrix[max_digits][size];

  while(max_digits > 0){
    for(int i = 0; i < size + 1; i++){
      int digits = get_digits(arr[i]);
      if(digits == max_digits){
        cout << arr[i] << " - " << i << endl;
        sort_by_lastnumber(arr_matrix[max_digits - 1], arr[i], size);
        cout << "Digits " << max_digits << endl;
        print_array(arr_matrix[max_digits - 1], size);
      }
    }
    max_digits--;
  }

  for(int j = 0; j < size; j++){

    for(int k = 0; k < size; k++){
      cout << arr_matrix;
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

  cout << "\nSorting via Radix sort..." << endl;

  radix_sort(numbers, size);

  //print_array(numbers, size);

  return 0;
}