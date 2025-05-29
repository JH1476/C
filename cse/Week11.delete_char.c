#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

char** delete_char(char input[SIZE][SIZE], int *new_row, int *new_col) {
    int row_to_keep[SIZE];
    int col_to_keep[SIZE];
    int row_keep = 0;
    int col_keep = 0;

    for (int i = 0; i < SIZE; i++) {
        int same = 1;
        for (int j = 1; j < SIZE; j++) {
            if (input[i][j] != input[i][0]) {
                same = 0;
                break;
            }
        }
        if (!same) {
            row_to_keep[row_keep++] = i;
        }
    }


    for (int j = 0; j < SIZE; j++) {
        int same = 1;
        for (int i = 1; i < SIZE; i++) {
            if (input[i][j] != input[0][j]) {
                same = 0;
                break;
            }
        }
        if (!same) {
            col_to_keep[col_keep++] = j;
        }
    }

    if (row_keep == 0 || col_keep == 0) {
        printf("invalid\n");
        return NULL;
    }

    char **result = (char**)malloc(row_keep*sizeof(char*));
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < row_keep; i++) {
        result[i] = (char*)malloc(col_keep*sizeof(char));
        if (result[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(result[j]);
            }
            free(result);
            return NULL;
        }
        for (int j = 0; j < col_keep; j++) {
            result[i][j] = input[row_to_keep[i]][col_to_keep[j]];
        }
    }

    *new_row = row_keep;
    *new_col = col_keep;

    return result;
}

int main() {
    char input[SIZE][SIZE];
    int new_row, new_col;
    int i, j;

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            scanf(" %c", &input[i][j]);

    char **resized = delete_char(input, &new_row, &new_col);

    if (resized != NULL) {
        for (i = 0; i < new_row; i++) {
            for (j = 0; j < new_col; j++) {
                printf("%c ", resized[i][j]);
            }
            printf("\n");
            free(resized[i]);
        }
        free(resized);
    }

    return 0;
}
