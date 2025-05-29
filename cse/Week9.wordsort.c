#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char* arr[100];
    for (int i=0; i<100; i++)
        arr[i] = (char*)malloc(sizeof(char) * 100);
    char** dptr;

    dptr = arr;

    int N = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", *(dptr+i));
    }

    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {

            int length1 = 0;

            while (*(*(dptr+j)+length1) != '\0') {
                length1++;
            }

            int length2 = 0;

            while (*(*(dptr+j+1)+length2) != '\0') {
                length2++;
            }

            if (length1 > length2) {
                char* temp = *(dptr+j);
                *(dptr+j) = *(dptr+j+1);
                *(dptr+j+1) = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", *(dptr+i));
    }

    return 0;
}
