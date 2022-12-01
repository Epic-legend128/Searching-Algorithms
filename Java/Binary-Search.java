public class Main {
  public static int binary(int[] array, int key) {
    int low = 0;
    int up = array.length-1;
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

  public static void main(String[] args) {
    int[] a = new int[] {1, 3, 5, 8, 10, 13, 15, 17, 19, 46, 73, 100};
    System.out.println(binary(a, 19));
  }
}
