#include <stdio.h>
int main() {
    int x = 0, y = 0, n = 0;
    scanf("%d %d %d", &x, &y, &n);

    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    char arr[20][20];

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            arr[i][j] = '0';
        }
    }

    int start_x = x-n/2;
    int start_y = y-n/2;
    int end_x = x+n/2;
    int end_y = y+n/2;
    
    for(int i = start_y; i <= end_y; i++) {
        for(int j = start_x; j <= end_x; j++) {
            if(i >= 0 && i < 20 && j >= 0 && j < 20) {
            arr[i][j] = 'X';
        }
    }
}
    if(a >= 0 && a < 20 && b >= 0 && b < 20) {
        if(a >= start_x && a <= end_x && b >= start_y && b <= end_y) {
            arr[b][a] = 'D';
        }
        else {
            arr[b][a] = 'A';
        }
    }

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

return 0;
}
