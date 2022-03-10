import math

#binary search
def binary(array, key):
  right = len(array)-1
  left = 0
  while (left <= right):
    mid = math.floor((left+right)/2)
    if array[mid] < key:
      left = mid+1
    elif array[mid] > key:
      right = mid-1
    else:
      return mid
  return -1

size = 5

print("Enter "+str(size)+" numbers:")
nums = []

for i in range(0, size):
  current = input()
  nums.append(current)

key = input("Enter the number you are looking for in the array:")

index = binary(nums, key)

if index >= 0:
  print("The number you are looking for is at index "+str(index))
else:
  print("Couldn't find the number you were looking for")
  
