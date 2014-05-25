#include <stdio.h>

int main(void) {
    while (1) {
        int d;
        scanf("%d", &d);
        if (d == -1) {
            break;
        }
        switch (d) {
        case 0:
            printf("N\n");
            break;
        case 45:
            printf("NW\n");
            break;
        case 90:
            printf("W\n");
            break;
        case 135:
            printf("SW\n");
            break;
        case 180:
            printf("S\n");
            break;
        case 225:
            printf("SE\n");
            break;
        case 270:
            printf("E\n");
            break;
        case 315:
            printf("NE\n");
            break;
        }
    }
    return 0;
}
