#include <iostream>
#include <vector>

int binary(const vector<int>& arrray, int key) {
  int right = array.size();
  int left = 0;
  while (left < right) {
    int mid = right+left/2;
    if (array[mid] < key) {
      left = mid+1;
    }
    else if (array[mid] > key) {
      right = mid-1;
    }
    else {
      return mid;
    }
  }
  
  return -1;
}

int main() {
  
}
