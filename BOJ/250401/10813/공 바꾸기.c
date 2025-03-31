#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N];

    for(int i = 0; i < N; i++) {
        a[i] = i+1;
    }

    for(int i = 0; i < M; i++) {
        int b,c;
        scanf("%d %d", &b, &c);

        int temp = a[b-1];
        a[b-1] = a[c-1];
        a[c-1] = temp;
    }

    for(int i = 0; i < N; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}
