#include <iostream>
#include <vector>

//linear search
int linear(const std::vector<int>& array, int key) {
  for (int i = 0; i<array.size(); i++) {
    if (array[i] == key) {
      return i;
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
  
  int index = linear(nums, key);
  if (index >= 0) {
  	std::cout << "The number you are looking for is at index "<<index<<" of the array\n";
  }
  else {
    std::cout << "Couldn't find the number you were looking for.\n";
  }
  
  return 0;
}
