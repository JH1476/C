#include <stdio.h>

void sum(int * p, int len) {
    int i = 0;
    int sum = 0;
    while (i < len) {
        sum += *(p+i);
        printf("%d ", sum);
        i++;
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[1024];
    for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
    }

    sum(arr,N);

    return 0;
}
