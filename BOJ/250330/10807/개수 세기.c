#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    int a[N];

    for(int i = 0; i < N; i++) {
        int M;
        scanf("%d", &M);
        a[i] = M;
    }

    int v;
    scanf("%d", &v);
    int sum = 0;

    for(int j = 0; j < N; j++) {
        if(a[j] == v) {
            sum++;
        }
    }
    printf("%d", sum);
}
