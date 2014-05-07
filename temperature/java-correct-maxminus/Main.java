import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    while (true) {
      int N = in.nextInt();
      if (N == 0) {
        break;
      }
      int min = Integer.MAX_VALUE;
      int max = Integer.MIN_VALUE;
      for (int i = 0 ; i < N ; i++) {
        int t = in.nextInt();
        min = Math.min(min, t);
        max = Math.max(max, t);
      }
      System.out.println(max - min);
    }
  }
}
