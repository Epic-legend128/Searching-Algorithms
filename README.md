# Searching-Algorithms
Searching algorithms in a bunch of different programming languages.

#Linear Search
Linear search loops through the whole array trying to find the number it is looking for by comparing the value of the number beig searched with every value of the array. When the number gets found then it doesn't need to check the rest of the array because it has already found the value. Because it uses a for loop to scan through the whole array, it means that its asymptotic notation is O(n).

#Binary Search
Binary search is even faster than linear search but it can only be used in sorted arrays. It works by recursively checking the middle value of the array to check if  the value being searched for, is bigger or less than the middle value of the array. Because it keeps dividing the array into two parts it has an asymptotic notation of O(logn).
