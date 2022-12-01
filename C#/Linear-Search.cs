using System;

namespace LinearSearch {
  class Program {
    public static int linear(int[] array, int key) {
      for (int i = 0; i<array.Length; i++) {
        if (array[i] == key) return i;
      }
      return -1;
    }
    
    static void Main() {
      int[] array = new int[] {5, 3, 7, 44, 63, 53, 35, 36, 9, 45};
      Console.WriteLine(linear(array, 3));
    }
  }
}
