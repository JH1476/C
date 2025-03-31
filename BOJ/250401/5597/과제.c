#include <stdio.h>

int main() {

    int a[30];

    for(int i = 0; i < 30; i++) {
        a[i] = 0;
    }

    for(int i = 0; i < 28; i++) {
        int n;
        scanf("%d", &n);
        a[n-1] = 1;
    }

    for(int j = 0; j < 30; j++) {
        if(a[j] != 1) {
            printf("%d\n",j+1);
        }
    }

    return 0;
}
