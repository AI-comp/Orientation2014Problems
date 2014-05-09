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
      int[] numEdges = new int[N+1];
      for (int i = 0 ; i < M ; i++) {
        int a = in.nextInt();
        int b = in.nextInt();
        numEdges[a]++;
        numEdges[b]++;
      }
      int answer = -1;
      int max = -1;
      for (int i = 1 ; i <= N ; i++) {
        if (max < numEdges[i]) {
          max = numEdges[i];
          answer = i;
        }
      }
      System.out.println(answer);
    }
  }
}
