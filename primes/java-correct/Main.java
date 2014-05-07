import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    while (true) {
      int N = in.nextInt();
      if (N == 0) {
        break;
      }
      boolean isOK = false;
      for (int i = 2 ; i < N ; i++) {
        if (N % i == 0) {
          if (isPrime(i) && isPrime(N/i)) {
            isOK = true;
          }
        }
      }
      if (isOK) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
    }
  }
  
  public static boolean isPrime(int x) {
    for (int i = 2 ; i < x ; i++) {
      if (x % i == 0) {
        return false;
      }
    }
    return true;
  }
}
