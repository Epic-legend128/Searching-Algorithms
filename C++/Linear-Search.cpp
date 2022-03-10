#include <iostream>
#include <vector>

//linear search
int linear(const vector<int>& array, key) {
  for (int i = 0; i<array.length(); i++) {
    if (array[i] == key) {
      return i;
    }
  }
  return NULL;
}

int main() {
  int size = 5;
  vector<int> nums(size, 0);
  cout << "Enter "<<size<<" numbers:\n";

  for (int i = 0; i < size; i++) {
    int current;
    cin >> current;
    nums.push_back(current);
  }
  
  cout << "Type which number you arelooking for in the array:\n";
  cin >> key;
  
  int index = linear(nums, key);
  if (index == NULL) {
    cout << "Couldn't find the number you were looking for.\n";
  }
  else {
    cout << "The number you are looking for is at index "<<index<<" of the array\n";
  }
  
  return 0;
}
