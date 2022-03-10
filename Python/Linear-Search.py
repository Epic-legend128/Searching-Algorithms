#linear search
def linear(array, key):
  for i in range(0, len(array)):
    if (array[i] == key):
      return i
  return -1


size = 5

print("Enter "+str(size)+" numbers:")
nums = []

for i in range(0, size):
  current = input()
  nums.append(current)

key = input("Enter the number you are looking for in the array:")

index = linear(nums, key)

if index >= 0:
  print("The number you are looking for is at index "+str(index))
else:
  print("Couldn't find the number you were looking for")
