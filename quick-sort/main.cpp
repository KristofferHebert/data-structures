#include <iostream> 
using namespace std;

void iterative_print(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

void recursive_direct_print(int arr[], int index){
      if(arr[index]){
        cout << arr[index] << endl;
        index++;
        recursive_direct_print(arr, index);     
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

  return 0;
}
