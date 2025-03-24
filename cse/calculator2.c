#include <stdio.h>

int add(int x, int y) { 

    return x+y;
}

int sub(int x, int y) {

    return x-y;
}

int mul(int x, int y) {

    return x*y;
}

int divi(int x, int y) {
    
    return x/y;
}

int rem(int x, int y) {
    return x%y;
}

int squ(int x, int y) {

    int square = 1;

for(int i = 0; i < y; i++){
        square *= x;
    }
        return square;
}

    int main() {

        int N;
        scanf("%d", &N);

        int a[N];
        int b[N];
        char c[N];
        
        for(int i = 0; i < N; i++) {
            scanf("%d %d %c", &a[i], &b[i], &c[i]);
        }

        for(int j = 0; j < N; j++) {

            if(c[j] == '+') {
                printf("%d\n", add(a[j], b[j]));  
            }
            else if(c[j] == '-') {
                printf("%d\n", sub(a[j], b[j]));
            }
            else if(c[j] == '*') {
                printf("%d\n", mul(a[j], b[j]));
            }
            else if(c[j] == '/') {
                printf("%d\n", divi(a[j], b[j]));
            }
            else if(c[j] == '%') {
                printf("%d\n", rem(a[j], b[j]));
            }
            else if(c[j] == '^') {
                printf("%d\n", squ(a[j], b[j]));
            }
        }

        return 0;
    }
