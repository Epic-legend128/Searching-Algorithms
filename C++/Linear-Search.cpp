#include <iostream>
#include <vector>

//linear search
int linear(const std::vector<int>& array, int key) {
  for (int i = 0; i<array.length(); i++) {
    if (array[i] == key) {
      return i;
    }
  }
  return NULL;
}

int main() {
  int size = 5;
  std::vector<int> nums(size, 0);
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
  if (index == NULL) {
    std::cout << "Couldn't find the number you were looking for.\n";
  }
  else {
    std::cout << "The number you are looking for is at index "<<index<<" of the array\n";
  }
  
  return 0;
}
