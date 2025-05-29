#include <stdio.h>
#include <stdlib.h>

int* my_realloc(int* old_array, int old_size, int new_size);

int main() {
    int n, m;
    int* array;

    scanf("%d", &n);

    array = (int*)malloc(n*sizeof(int));
    if (array == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &*(array+i));
    }

    scanf("%d", &m);

    array = my_realloc(array, n, m);
    if (array == NULL) {
        return 1;
    }

    for (int i = n; i < m; i++) {
        scanf("%d", &*(array+i));
    }
  
    for (int i = 0; i < m; i++) {
        printf("%d ",*(array+i));
    }

    printf("\n");

    free(array);

    return 0;
}

int* my_realloc(int* old_array, int old_size, int new_size) {
    
    int* new_array;

    new_array = (int*)malloc(new_size * sizeof(int));
    if (new_array == NULL) {
        return NULL;
    }

    for (int i = 0; i < old_size && i < new_size; i++) {
        *(new_array+i) = *(old_array+i);
    }

    free(old_array);

    return new_array;
}
