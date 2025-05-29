#include <stdio.h>

int main() {

    int M = 0;
    int L = -1;
    int value = 1;

    scanf("%d", &M);

    if(M > 0 && M < 100000000000) {

        int i = 1;

        while(i <= M) {
    
            value = value * i;
                
            if (value != M && value <= M) {
    
                i++;
            }
    
            else if (value == M) {
                int N = i;
                printf("%d\n", N);
                break;
            }
    
            else {
                printf("%d\n", L);
                break;
            }
        }
    }   

    return 0;
}
