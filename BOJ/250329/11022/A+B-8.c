#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int sum[T];
    int a[T];
    int b[T];
    for(int i=0; i<T; i++) {
        scanf("%d %d", &a[i], &b[i]);
        sum[i] = a[i] + b[i];
    }
    for(int j=0; j<T; j++){
        printf("%s%d%s%d%s%d%s%d\n","Case #",(j+1),": ",a[j]," + ",b[j]," = ",sum[j]);

    }
    return 0;
}
