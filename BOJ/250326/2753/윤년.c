#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    if (a >= 1 && a <= 4000) {
        if (((a % 4 == 0) && ((a % 100) != 0) || (a % 400 == 0))) {
            printf("%c\n", '1');
        }
        else {
            printf("%c\n", '0');
        }
    }
}
