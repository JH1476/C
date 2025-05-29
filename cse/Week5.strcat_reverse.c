#include <stdio.h>

int main() {
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    
    char* array[] = {a, b, c, d};
    char result[200];

    char * vor = result;
    for (int j = 0; j <= 199; j++) {
        *(vor+j) = 0;
    }

    for (int i = 0; i <= 3; i++) {
        scanf("%s", *(array+i));
    }

    for (int k = 3; k >= 0; k--) {
        char * reverse = *(array+k);

        while (*reverse != '\0') {
            *vor = *reverse;
            vor++;
            reverse++;
        }
    }
    
    printf("%s\n", result);
    return 0;
}
