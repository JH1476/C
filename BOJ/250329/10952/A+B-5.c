#include <stdio.h>

int main() {

    int loop = 1;

    while(loop) {
        int a,b;
        scanf("%d %d", &a, &b);
        if(a==0 && b==0) {
            return 0;
        }
        printf("%d\n",a+b);
    }
    return 0;
}
