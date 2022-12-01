public class Main {
  public static int linear(int[] array, int key) {
    for (int i = 0; i<array.length; i++) {
      if (array[i] == key) {
        return i;
      }
    }
    return -1; //not found
  }
  
  public static void main(String[] args) {
    int[] a = new int[] {5, 2, 6, 2, 9, 45, 635, 4, 747, 35, 3};
    System.out.println(linear(a, 2));
  }
}
