#include <stdio.h>

int main() {

    char cl[4];

    scanf("%c %c %c %c", &cl[0], &cl[1], &cl[2], &cl[3]);

    for(int i = 0; i < 4; i++) {
        if(cl[i] >= 'a' && cl[i] <= 'z') {
            printf("%c", (int)cl[i] - 32);
        }

        else if(cl[i] >= 'A' && cl[i] <= 'Z') {
            printf("%c", (int)cl[i] + 32);
        }

        else {
                printf("%c", cl[i]);
            }

        if(i < 3) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
