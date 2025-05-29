#include <stdio.h>

int main() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);

    int arr[100][100];

    int (*arr_ptr)[100] = arr;

    int sum[100];
    int idx[100];

    for (int i = 0; i < N; i++) {
        sum[i] = 0;
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr_ptr[i][j]);
            sum[i] += arr_ptr[i][j];
        }
        idx[i] = i;
    }

    for (int i = 1; i < N; i++) {
        int key = idx[i];
        int ksum = sum[key];
        int j = i-1;
        while (j >= 0 && sum[idx[j]] > ksum) {
            idx[j+1] = idx[j];
            j--;
        }
        idx[j+1] = key;
    }

    for (int t = 0; t < N; t++) {
        int row = idx[t];
        for (int j = 0; j < M; j++) {
            printf("%d", arr_ptr[row][j]);
            if (j < M) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
