#include <stdio.h>

int main() {

    int a[42];
    int count = 0;
    int num = 0;

    for(int i = 0; i < 42; i++) {
        a[i] = 0;
    }

    for(int i = 0; i < 10; i++) {
        int b;
        scanf("%d", &b);
        num = b % 42;
        if(a[num] != 1) {
            a[num] = 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
