#include <stdio.h>
#include <stdlib.h>

//binary search, the ptr points at the first element of the array which also has its length
int binary(const int *ptr, int key) {
  int right = *ptr;
  int left = 0;
  while (left <= right) {
    int mid = (int) ((right+left)/2)+1;
    if (*(ptr+mid) < key) {
      left = mid;
    }
    else if (*(ptr+mid) > key) {
      right = mid-1;
    }
    else {
      return mid-1;
    }
  }
  
  return -1;
}

int main() {
  int size = 5;
  int nums[size+1];
  nums[0] = size;
  printf("Enter %d numbers in ascending order:\n", size);

  for (int i = 1; i <= size; i++) {
    int current;
    scanf("%d", &current);
    nums[i] = current;
  }
  
  int key;
  
  printf("Type which number you arelooking for in the array:\n");
  scanf("%d", &key);
  
  int index = binary(nums, key);
  if (index >= 0) {
  	printf("The number you are looking for is at index %d of the array\n", index);
  }
  else {
    printf("Couldn't find the number you were looking for.\n");
  }
}
