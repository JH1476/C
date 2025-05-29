#include <stdio.h>

int main() {
    int magic[5][5];

    int (*magic_ptr)[5] = magic;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", (*(magic_ptr+i)+j));
        }
    }

    int target = 0;
    for (int j = 0; j < 5; j++) {
        target += *(*(magic_ptr+0)+j);
    }

    for (int i = 1; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += *(*(magic_ptr+i)+j);
        }
        if (sum != target) {
            printf("no\n");
            return 0;
        }
    }

    for (int j = 0; j < 5; j++) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += *(*(magic_ptr+i)+j);
        }
        if (sum != target) {
            printf("no\n");
            return 0;
        }
    }

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < 5; i++) {
        diag1 += *(*(magic_ptr+i)+i);
        diag2 += *(*(magic_ptr+i)+(4-i));
    }
    
    if (diag1 != target || diag2 != target) {
        printf("no\n");
        return 0;
    }

    printf("yes\n");
    return 0;
}
