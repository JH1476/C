#include <stdio.h>

int main() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int arr[10][17] = {0};
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {

        int col[17] = {0};
        
        for (int j = i; j < N; j++) {

            int sum = 0;
            int start = 0;

            for (int k = 0; k < M; k++) {
                col[k] += arr[j][k];
            }

            for (int end = 0; end < M; end++) {

                for ((sum += col[end]); sum > 10;) {
                    sum -= col[start++];
                }

                if (sum == 10) {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
