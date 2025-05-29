#include <stdio.h>

void rec(int i) {
    printf("%d\n", i);
    rec(i+1);
}

int main() {
    rec(1); 
    return 0;
}
