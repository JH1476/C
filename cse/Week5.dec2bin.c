#include <stdio.h>

int main() {

    int N = 0, i = 0;
    scanf("%d", &N);
    
    while (i < N) {
        unsigned X = 0;
        scanf("%u", &X);
        int arr[32];
        int * ptr = arr;

        int j = 0;

        while (X > 0) {
            *(ptr+j) = X % 2;
            X = X / 2;
            j++;
        }

        if (j == 0) {
            printf("%d\n", j);
        }

        else {
            int k = j-1;
            while (k >= 0) {
                printf("%d", *(ptr+k));
                k--;
            }
            printf("\n");
        }

        i++;

    }

    return 0;

}
