var binary = function(array, key) {
  var right = array.length-1;
  var left = 0;
  while (left<=right) {
    var mid = Math.floor((left+right)/2);
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
