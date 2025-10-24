import java.util.*;
public class swapping {
  public static void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    System.out.println("After swapping: a = " + a + ", b = " + b);
  }

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Enter two integer values to swap:");
    int a = scan.nextInt();
    int b = scan.nextInt();
    swap(a, b);
  }
}