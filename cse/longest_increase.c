#include <stdio.h>

void max_length(int * p, int len) {
    int i = 1;
    int count = 1;
    int max = 1;
    while (i < len) {
        if(*(p+i-1) < *(p+i)) {
            count++;
            if(count > max) {
                max = count;
            }
        }
        else {
            count = 1;
        }
        i++;
    }
    printf("%d\n", max);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[1024];
    for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
    }

    max_length(arr,N);

    return 0;
}
