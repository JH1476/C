    #include <stdio.h>
    #include <string.h>

    int main() {
        int N, K; 
        scanf("%d %d", &N, &K);

        if((N >= 1 && N <= 1024) && (K >= 1 && K <= 1000000)) {
            
        int a[N];
            
        for(int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }

        for(int m = 0; m < K; m++) {
            int i, j, temp;
            scanf("%d %d", &i, &j);
            if((i>=0 && j>=0) && (i<N && j<N)) {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            }
        }
        for (int n = 0; n < N-1; n++) {
            printf("%d ", a[n]);
            }
            printf("%d\n", a[N-1]);
        }
        return 0;
    }
