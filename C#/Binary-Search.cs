using System;

namespace Binary {
  class Program {
    public static int binary(int[] array, int key) {
      int low = 0;
      int up = array.Length-1;
      while (low<=up) {
        int mid = (up+low)/2;
        if (array[mid] > key) {
          up = mid-1;
        }
        else if (array[mid] < key) {
          low = mid+1;
        }
        else {
          return mid;
        }
      }
      return -1;
    }
    
    static void Main() {
      int[] a = new int[] {1, 6, 7, 9, 11, 16, 18, 25, 68, 89, 100, 130};
      Console.WriteLine(binary(a, 7));
    }
  }
}
