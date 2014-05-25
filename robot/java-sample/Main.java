import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    while (true) {
      int n = scanner.nextInt();
      if (n == 0) {
        break;
      }

      int pos = 0;
      for (int i = 0; i < n; i++) {
        String d = scanner.next();
        int l = scanner.nextInt();
        if (d.equals("L")) {
          pos -= l;
        } else {
          pos += l;
        }
      }
      System.out.println(pos);
    }
  }
}
