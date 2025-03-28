#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        for(int j = T-1; j > i; j--) {
            printf(" ");
        }
        for(int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
