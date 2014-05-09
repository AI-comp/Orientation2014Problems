import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    while (true) {
      int N = in.nextInt();
      int M = in.nextInt();
      if (N == 0 && M == 0) {
        break;
      }
      int[] inDegree = new int[N+1];
      for (int i = 0 ; i < M ; i++) {
        int a = in.nextInt();
        int b = in.nextInt();
        inDegree[b]++;
      }
      int answer = -1;
      int max = -1;
      for (int i = 1 ; i <= N ; i++) {
        if (max < inDegree[i]) {
          max = inDegree[i];
          answer = i;
        }
      }
      System.out.println(answer);
    }
  }
}
