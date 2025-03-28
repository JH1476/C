#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int sum[T];
    for(int i=0; i<T; i++){
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
    }
    for(int j=0; j<T; j++){
        printf("%d\n",sum[j]);
    }
    return 0;
}
