#include <stdio.h>

int included_fibonacci(int X, int Y, int N) {
    if (X == N) {
        return 1;
    }
    else if (X > N) {
        return 0;
    }
    else {
        return included_fibonacci(Y, X+Y, N);
    }
}

int main() {

    int N;
    scanf("%d", &N);

    if (N < 1) {
        printf("y\n");
    }
    else if (included_fibonacci(0,1,N)) {
        printf("y\n");
    }
    else {
        printf("n\n");
    }

    return 0;
}
