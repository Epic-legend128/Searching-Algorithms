#include <iostream>
#include <vector>
#include <cmath>

//binary search
int binary(const std::vector<int>& array, int key) {
  int right = array.size()-1;
  int left = 0;
  while (left <= right) {
    int mid = floor(right+left/2);
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
  int size = 5;
  std::vector<int> nums;
  nums.reserve(size);
  std::cout << "Enter "<<size<<" numbers:\n";

  for (int i = 0; i < size; i++) {
    int current;
    std::cin >> current;
    nums.push_back(current);
  }
  
  int key;
  
  std::cout << "Type which number you arelooking for in the array:\n";
  std::cin >> key;
  
  int index = binary(nums, key);
  if (index >= 0) {
  	std::cout << "The number you are looking for is at index "<<index<<" of the array\n";
  }
  else {
    std::cout << "Couldn't find the number you were looking for.\n";
  }
}
