#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int sum = 0;
    if(n>=1 && n<= 10000) {
        while (i <= n) {
            sum += i;
            i++;
        }
        printf("%d", sum);
    }
    return 0;
}
