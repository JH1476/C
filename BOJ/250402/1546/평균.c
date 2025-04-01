#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a[N];

    for(int i = 0; i < N; i++) {
        a[i] = 0;
    }

    int max = a[0];
    double average = 0;

    for (int i = 0; i < N; i++) {
        int b;
        scanf("%d", &b);
        a[i] = b;

        if (a[i] > max) {
            max = a[i];
        }
    }

    for (int j = 0; j < N; j++) {
        average += (double)a[j]/max*100;
    }

    printf("%lf",average/N);

    return 0;
}
