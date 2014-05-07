import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    while (true) {
      int N = in.nextInt();
      if (N == 0) {
        break;
      }
      int[] t = new int[N];
      for (int i = 0 ; i < N ; i++) {
        t[i] = in.nextInt();
      }
      Arrays.sort(t);
      System.out.println(t[N-1] - t[0]);
    }
  }
}
