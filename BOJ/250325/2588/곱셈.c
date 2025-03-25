#include <stdio.h>

int main() {
    int A,B;
    scanf("%d\n%d", &A, &B);

    int num1 = B%10;
    int num2 = B/10%10;
    int num3 = B/100;

    printf("%d\n", A * num1);
    printf("%d\n", A * num2);
    printf("%d\n", A * num3);
    printf("%d\n", A * B);
}
