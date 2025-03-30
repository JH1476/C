#include <stdio.h>

int main() {
    int N,M;
    scanf("%d %d", &N, &M);

    int a[N];

    for(int i = 0; i < N; i++) {
        a[i] = 0;
    }

    for(int i = 0; i < M; i++) {
        int i,j,k;
        scanf("%d %d %d", &i, &j, &k);

        while(i <= j) {
            a[i-1] = k;
            i++;
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}
