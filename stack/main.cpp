#include <iostream>
#include <vector>
using namespace std;

class Stack {
  private:
    vector<int> items;
  public:
    void add(int item){
      return items.push_back(item);
    };
    int remove(){
      return items.pop_back();
    }
    void process();

}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
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

  cout << "\nSorting via Merge sort..." << endl;

  merge_sort(numbers, 0, size);

  print_array(numbers, size);

  return 0;
}