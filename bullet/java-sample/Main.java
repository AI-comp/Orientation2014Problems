import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    while (true) {
      int n = scanner.nextInt();
      int p = scanner.nextInt();
      if (n == 0 && p == 0) {
        break;
      }

      int answer = 0;
      for (int i = 0; i < n; i++) {
        int t = scanner.nextInt();
        p -= t;
        if (p >= 0) {
          answer++;
        }
      }
      System.out.println(answer);
    }
  }
}
