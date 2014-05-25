import java.util.Scanner;
import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    while (true) {
      int N = scanner.nextInt();
      if (N == 0) {
        break;
      }
      int[] t = new int[N];
      for (int i = 0; i < N; i++) {
        t[i] = scanner.nextInt();
      }
      Arrays.sort(t);
      int answer = 0;
      for (int i = 0; i < N - 1; i++) {
        answer += Math.abs(t[i] - t[i + 1]);
      }
      System.out.println(answer);
    }
  }
}
