#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    if((-10000 <= a <= 10000) && (-10000 <= b <= 10000)) {
        if(a < b) {
            printf("%c\n", '<');
        }
        else if (a > b) {
            printf("%c\n", '>');
        }
        else {
            printf("%s\n", "==");
        }
    }
    
}
