import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    while (true) {
      int d = scanner.nextInt();
      if (d == -1) {
        break;
      }
      String answer = "";
      switch (d) {
        case 0:
          answer = "N";
          break;
        case 45:
          answer = "NW";
          break;
        case 90:
          answer = "W";
          break;
        case 135:
          answer = "SW";
          break;
        case 180:
          answer = "S";
          break;
        case 225:
          answer = "SE";
          break;
        case 270:
          answer = "E";
          break;
        case 315:
          answer = "NE";
          break;
      }
      System.out.println(answer);
    }
  }
}
