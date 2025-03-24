#include <stdio.h>
#include <math.h>

    int gcd(int x, int y) {

        int gcd_n = 0;

        for (int i = 1; i<=x && i<=y; i++) {
            if ((x%i==0) && (y%i==0)) {
                gcd_n = i;
            }
        }
        return gcd_n;
    }

    int lcm(int x, int y) {

        int gcd_n = 0;

        for (int i = 1; i<=x && i<=y; i++) {
            if ((x%i==0) && (y%i==0)) {
                gcd_n = i;
            }
        }
        return gcd_n * (x/gcd_n) * (y/gcd_n);
    }

    int main() {

        int N;
        scanf("%d", &N);

        int A[N];
        int B[N];

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &A[i], &B[i]);
        }

        for (int j = 0; j < N; j++) {

            int gcd_n = gcd(A[j], B[j]);
            int lcm_n = lcm(A[j], B[j]);

            printf("%d %d\n", gcd_n, lcm_n);
        }

        return 0;
    }
