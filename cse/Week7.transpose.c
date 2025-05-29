#include <stdio.h>
int main() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);

    int T1[128][128] = {0};
    int T2[128][128] = {0};

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &T1[i][j]);
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
                T2[i][j] = T1[j][i];
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
        printf("%d ", T2[i][j]);
        }
    printf("\n");
    }

return 0;
}
