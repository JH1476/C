#include <stdio.h>

int main() {

    int x = 0;
    int y = 0;

    scanf("%d %d", &x, &y);

    printf("%d %d", 2*x*y-12, 3*x*x-12*y*y*y+21*x+2*y);

    return 0;

}
