#include <stdio.h>

int main(void)
{
    while (1) {
        int l;
        scanf("%d", &l);
        if (l == 0) {
            break;
        }

        char s[501];
        scanf("%s", s);

        char current = 'a';
        int i;
        for (i = 0; i < l; i++) {
            switch (s[i]) {
                case '+':
                    if (current == 'z') {
                        current = 'a';
                    } else {
                        current++;
                    }
                    break;
                case '-':
                    if (current == 'a') {
                        current = 'z';
                    } else {
                        current--;
                    }
                    break;
                case '.':
                    printf("%c", current);
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
