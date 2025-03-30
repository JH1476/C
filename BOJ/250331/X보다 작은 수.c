#include <stdio.h>

int main() {
    int N,X;
    scanf("%d %d", &N, &X);
    int a[N];

    for(int i = 0; i < N; i++) {
        int A;
        scanf("%d", &A);
        a[i] = A;
        if(a[i] < X) {
            printf("%d%s",a[i]," ");
        }
    }
}
