import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    while (true) {
      int n = scanner.nextInt();
      if (n == 0) {
        break;
      }

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = scanner.nextInt();
      }

      int answer = 0;
      for (int i = 1; i <= n - 2; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
          answer++;
        }
      }
      System.out.println(answer);
    }
  }
}
