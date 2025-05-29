#include <stdio.h>

int main() {
    int N = 0;
    scanf("%d", &N);

    char ant_square[10][10];
    char (*aptr)[10] = ant_square;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *(*(aptr+i)+j) = '.';
        }
    }

    int x = 0, y = 0;
    int dx = 1, dy = 0;
    int left = 0, right = 9, top = 1, bottom = 9;

    *(*(aptr+x)+y) = '#'; 

    for (int i = 1; i <= N; i++) {
        x += dy;
        y += dx;

        *(*(aptr+x)+y) = '#';

        if (dx == 1 && y == right) {
            dx = 0;
            dy = 1;
            right--;
        } 
        
        else if (dy == 1 && x == bottom) {
            dx = -1;
            dy = 0;
            bottom--;
        } 
        
        else if (dx == -1 && y == left) {
            dx = 0;
            dy = -1;
            left++;
        } 
        
        else if (dy == -1 && x == top) {
            dx = 1;
            dy = 0;
            top++;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", *(*(aptr+i)+j));
        }
        printf("\n");
    }

    return 0;
}
