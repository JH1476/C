#include <stdio.h>

int main() {
    int X, N;
    scanf("%d\n%d", &X, &N);
    int a[N];
    int b[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d%d",&a[i],&b[i]);
        sum += a[i] * b[i];
    }
    if(X==sum) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
