#include <stdio.h>

int main() {

    int a[9];

    for (int i = 0; i < 9; i++) {
        int A;
        scanf("%d", &A);
        a[i] = A;
    }

    int max = a[0];
    int count = 1;

    for(int i = 1; i < 9; i++) {
        if(a[i] > max) {
            max = a[i];
            count = i+1;
        }
    }

    printf("%d\n",max);
    printf("%d",count);

    return 0;
}
