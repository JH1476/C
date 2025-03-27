#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++) {
        int c, d;
        scanf("%d", &c);
        scanf("%d", &d);
        b[i] = c+d;
    }
    for (int j = 0; j < a; j++) {
        printf("%d\n",b[j]);
    }
}
