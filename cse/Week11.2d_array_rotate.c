    #include <stdio.h>

    void rotate_square(int (*arr)[5], int N) {
        int temp[5][5];
        N %= 4;

        for (int k = 0; k < N; k++) {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    *(*(temp+j)+(4-i)) = *(*(arr+i)+j);
                }
            }

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    *(*(arr+i)+j) = *(*(temp+i)+j); 
                }
            }
        }
    }

    int main() {
        int N = 0;
        scanf("%d", &N);

        int square[5][5];
        int (*square_ptr)[5] = square;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                scanf("%d", *(square_ptr+i)+j);
            }
        }

        rotate_square(square_ptr, N);

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%d ", *(*(square+i)+j));
            }
            printf("\n");
        }

        return 0;
    }
