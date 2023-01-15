#include <stdio.h>
#include <stdlib.h>

//linear search, the ptr points at the first element of the array which also has its length
int linear(const int *ptr, int key) {
    int size = *ptr;
  for (int i = 1; i<=size; i++) {
    if (*(ptr+i) == key) {
      return i-1;
    }
  }
  return -1;
}

int main() {
  int size = 5;
  int nums[size+1];
  nums[0] = size;
  printf("Enter %d numbers:\n", size);

  for (int i = 1; i <= size; i++) {
    int current;
    scanf("%d", &current);
    nums[i] = current;
  }
  
  int key;
  
  printf("Type which number you arelooking for in the array:\n");
  scanf("%d", &key);
  
  int index = linear(nums, key);
  if (index >= 0) {
  	printf("The number you are looking for is at index %d of the array\n", index);
  }
  else {
    printf("Couldn't find the number you were looking for.\n");
  }
  
  return 0;
}
