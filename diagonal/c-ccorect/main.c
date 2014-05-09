#include <stdio.h>

int main(void)
{
    int i, j, n;
    while (scanf("%d", &n), n)
    {
        char s[n];
        for (i = 0; i < n; i++)
        {
            scanf("%s", s);
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
