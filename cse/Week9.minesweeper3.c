#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char* arr[100];
    for (int i=0; i<100; i++)
        arr[i] = (char*)malloc(sizeof(char) * 100);
    char** dptr;

    dptr = arr;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf(" %c", (*(dptr+i)+j));
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (*(*(dptr+i)+j) == '*') {
                continue;
            }

            else {

                int count = 0;

                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {

                        if (dx == 0 && dy == 0) {
                            continue;
                        }

                        else {
                            int nx = i+dx;
                            int ny = j+dy;
                            if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10) {
                                if (*(*(dptr+nx)+ny) == '*') {
                                    count++;
                                }
                            }
                        }
                    }
                }

                *(*(dptr+i)+j) = count + '0';
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", *(*(dptr+i)+j));
        }
        printf("\n");
    }

    return 0;
}
