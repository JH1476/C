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
        printf("%s%d%s%d\n","Case #",(j+1),": ",sum[j]);
    }
    return 0;
}
