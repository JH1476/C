#include <stdio.h>

int main() {

    int H, M, N;
    scanf("%d %d %d", &H, &M, &N);
    if (H == M && M == N) {
        printf("%d",10000 + H*1000);
    }
    else if ((H == M) || (M == N)) {
        printf("%d",1000 + M*100);
    }
    else if (H == N) {
        printf("%d",1000 + H*100);
    }
    else {
        if(H > M && H > N) {
            printf("%d",H*100);
        }
        else if (M > H && M > N) {
            printf("%d",M*100);
        }
        else {
            printf("%d",N*100);
        }
    }
}
