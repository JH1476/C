#include <stdio.h>
#include <stdlib.h>

int main() {
    int image[5][5];
    int mask[3][3];
    int result[3][3];

    int *iptr = &image[0][0];
    int *mptr = &mask[0][0];
    int *rptr = &result[0][0];

    for (int i = 0; i < 25; i++) {
        scanf("%d", iptr+i);
    }

    for (int i = 0; i < 9; i++) {
        scanf("%d", mptr+i);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int sum = 0;

            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    int iptr_val= *(iptr + ((i+k)*5) + (j+l));
                    int mptr_val = *(mptr + (k*3) + l);
                    sum += (iptr_val)*(mptr_val);
                }
            }

            if (sum < 0) {
                sum = 0;
            } 
            
            else if (sum > 9) {
                sum = 9;
            }

            *(rptr + (i*3) + j) = sum;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", *(rptr + (i*3) + j));
            if (j < 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
