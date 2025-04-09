#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char b[101];
    scanf("%s", b);

    int i = 0;
    int sum = 0;
    while(i < N) {
    sum += b[i] - '0';
    i++;
    }

    printf("%d", sum);
    return 0;
}
