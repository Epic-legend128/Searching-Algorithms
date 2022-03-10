var linear = function(array, key) {
  for (var i = 0; i<array.length; i++) {
    if (array[i] === key) {
      return i;
    }
  }
  return -1;
}
