#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    if((a >= -1000 && a <= 1000 && a!=0) && (b >= -1000 && b <= 1000 && b!=0)) {
        if(a>0 && b>0) {
            printf("%c\n", '1');
        }
        if(a<0 && b>0) {
            printf("%c\n", '2');
        }
        if(a<0 && b<0) {
            printf("%c\n", '3');
        }
        if(a>0 && b<0) {
            printf("%c\n", '4');
        }
    }
}
