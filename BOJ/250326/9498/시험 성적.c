#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    if(a >= 90 && a <= 100) {
        printf("%c\n", 'A');
    }
    else if (a >= 80 && a < 90) {
        printf("%c\n", 'B');
    }
    else if (a >= 70 && a < 80) {
        printf("%c\n", 'C');
    }
    else if (a >= 60 && a < 80) {
        printf("%c\n", 'D');
    }
    else {
        printf("%c\n", 'F');
    }
}
