#include <stdio.h>

int main() {

    int x = 0;
    int y = 0;
    int ly = 0;
    int ct = 0;

    scanf("%d %d", &x, &y);

    if(x <= y && x >= 0 && x <= 9999 && y >= 0 && y <= 9999) {

        for(int i = x; i <= y; i++) {

            ly = i;

            if((ly % 4 == 0 && ly % 100 != 0) || ly % 400 == 0) {

                ct++;
            }
            
        }
        
        printf("%d", ct);

    }
        
        else {

            printf("bound error\n");
    
            }

            return 0;
}
