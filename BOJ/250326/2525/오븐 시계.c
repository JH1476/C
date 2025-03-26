#include <stdio.h>

int main() {

    int H, M, N;
    scanf("%d %d %d", &H, &M, &N);
    if ((H >= 0 && H <= 23) && (M >= 0 && M <= 59) && (N>=0 && N<=1000)) {

        int A = M+N;

        if (H != 23 && A >= 60) {
            if((A/60)+H >= 24) {
                printf("%d%c%d",(H-24)+(A/60),' ',A%60);
            }
            else {
                printf("%d%c%d",H+(A/60),' ',A%60);
            }
        }
        else if (H != 23 && A < 60) {
            printf("%d%c%d",H+(A/60),' ',A%60);
        }
        else {
            printf("%d%c%d",(H-24)+(A/60),' ',A%60);
        }
    }
}
