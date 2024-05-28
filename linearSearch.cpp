#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return true;
    }
  }

  return false;
}

int main() {

  int arr[5] = {1, 2, 3, 4, 5};
  int target = 15;

  cout << "Found " << linearSearch(arr, 5, target) << "\n";
}
