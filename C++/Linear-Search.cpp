#include <iostream>
#include <vector>

int linear(const vector<int>& array, key) {
  for (int i = 0; i<array.length(); i++) {
    if (array[i] === key) {
      return i;
    }
  }
  return NULL;
}

int main() {
  int limit = 10;
  vector<int> myArray(limit, 0);
  return 0;
}
