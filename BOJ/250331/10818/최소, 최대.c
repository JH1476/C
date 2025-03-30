#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i < N; i++) {
        int A;
        scanf("%d", &A);
        a[i] = A;
    }

    int min = a[0], max = a[0];
    for (int i = 1; i < N; i++) {
        if (min > a[i]) {
            min = a[i];
        }
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("%d%s%d",min," ",max);
}
