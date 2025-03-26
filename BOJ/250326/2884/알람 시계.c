#include <stdio.h>

int main() {

    int H, M;
    scanf("%d %d", &H, &M);
    if ((H >= 0 && H <= 23) && (M >= 0 && M <= 59)) {
        if(H != 0 && M < 45) {
            printf("%d%c%d", H-1,' ',((M+60)-45));
        }
        else if (H == 0 && M < 45) {
            printf("%d%c%d",((H+24)-1),' ',((M+60)-45));
        }
        else if(H != 0 && M >= 45) {
            printf("%d%c%d",H,' ',(M-45));
        }
        else if (H == 0 && M >= 45) {
            printf("%d%c%d",H,' ',(M-45));
        }
    }
}
