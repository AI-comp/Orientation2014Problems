#include <stdio.h>

int main(void)
{
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int i;
        for (i = 0; i < n; i++) {
            char s[101];
            scanf("%s", s);
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
